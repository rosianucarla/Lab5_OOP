#include "Repository.h"
#include <iostream> 
#include <algorithm>
using namespace std;

int Repository::size()
{
	return filme.size();
}


int Repository::user_size()
{
	return watchlist.size();
}

void Repository::view_genre(const string& genre)
{
    bool gasit = false;
    for (auto& iter : filme) {
        if (iter.getGenre() == genre) {
            gasit = true;
            cout << iter.toString();
        }
    }
    if (!gasit) {
        bool placut = false;
        for (auto& iter : filme) {
            cout << iter.toString();
            system(("start " + iter.getTrailer()).c_str());
            cout << "Did you like the trailer? 1 Yes, 0 No";
            int var = 0;
            cin >> var;
            if (var == 1)
                placut = true;
            if (placut) {
                bool adaug = false;
                cout << "Would you like to add the film to the watchlist? 1 Yes, 0 No";
                var = 0;
                cin >> var;
                if (var == 1)
                    adaug = true;
                if (adaug)
                    watchlist.push_back(iter);
                break;
            }

        }
    }
}

void Repository::watch(const string& title, int year)
{
    bool like = false;
    auto it = find_if(watchlist.begin(), watchlist.end(), [=](Film& obj) { //const Film& obj
        return (obj.getTitle() == title && obj.getYear() == year);
        });
    if (it != watchlist.end()) {
        watchlist.erase(it);
        cout << "would you like to rate the film ? 1 Yes, 0 Nein";
        int var;
        cin >> var;
        if (var == 1)
            like = true;

    }
    else { cout << "You have no such film on the watch list\n"; }
    if (like) {
        it = find_if(filme.begin(), filme.end(), [=](Film& obj) {
            return (obj.getTitle() == title && obj.getYear() == year);
            });
        if (it != filme.end()) {
            int index = std::distance(filme.begin(), it);
            filme[index].setLikes(filme[index].getLikes() + 1);
        }
    }
}

void Repository::delete_film(const string& title, int year) {
    auto endv_med = std::remove_if(begin(filme), end(filme), [=](Film film) {
        return ((film.getTitle() == title) && (film.getYear() == year));
        });
    if (endv_med != end(filme)) {
        filme.erase(endv_med, end(filme));
        std::cout << "Film is deleted\n";
    }
    else
        std::cout << "Film not found\n";
}

void Repository::add_film(const string& title, const string& genre, int year, int likes, const string& trailer) {
    auto it = find_if(filme.begin(), filme.end(), [=](Film& obj) {
        return (obj.getTitle() == title && obj.getYear() == year);
        });
    if (it != filme.end()) {
        std::cout << "This film exists\n";
    }
    else
        filme.push_back(Film(title, genre, year, likes, trailer));
}

void Repository::edit_film(const string& title, int year, string new_link) {
    auto it = find_if(filme.begin(), filme.end(), [=](Film& obj) {
        return (obj.getTitle() == title && obj.getYear() == year);
        });
    if (it != filme.end()) {
        int index = std::distance(filme.begin(), it);
        filme[index].setTrailer(std::move(new_link));
    }
    else {
        std::cout << "Such a film does not exist\n";
    }
}

bool Repository::exists_film(const string& title, int year)
{
    auto it = find_if(filme.begin(), filme.end(), [=](Film& obj) {
        return (obj.getTitle() == title && obj.getYear() == year);
        });
    if (it != filme.end())
        return true;

    return false;
}

void Repository::view_filme() {
    std::cout << "The following films exist: \n";
    for (auto& iter : filme) {
        cout << iter.toString();
    }
}

