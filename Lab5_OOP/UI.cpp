#include <string>
#include <iostream>
#include "Repository.h"
#include <stdlib.h>
#include <typeinfo>

std::string menu(int mod) {
    std::string aux;
    if (mod == 1)
        aux = "\nMenu Administrator\n"
        "Option: \n"
        "1 - Add\n"
        "2 - Data Settings\n"
        "3 - Delete\n"
        "4 - Film List\n"
        "0 - Exit\n"
        "\n";
    else
        aux = "\nMenu User :\n"
        "Option: \n"
        "1 - Search genre\n"
        "2 - Delete/Watch\n"
        "0 - Exit\n"
        "\n";

    return aux;
}

void valid() {
    if (!cin) {
        cin.clear();
        cout << "Wrong input! \n";
        exit(EXIT_FAILURE);

    }
}

bool UI() {
    int mod;
    std::cout << "1-Admin 2-User\n";
    std::cin >> mod;
    valid();
    if (mod == 1 || mod == 2)
        std::cout << menu(mod);
    else
        return false;
    int option;
    std::string title, genre, trailer;
    int year, likes;
    std::string new_link;
    if (mod == 1) {
        auto adm = new Repository();
        while (true) {
            std::cout << "Option:\n";
            std::cin >> option;
            valid();
            switch (option) {
            case 0:
                return false;
            case 1:
                std::cout << "\nEnter the movie title: ";
                std::cin >> title;
                valid();
                std::cout << "\nEnter the release year: ";
                std::cin >> year;
                valid();
                std::cout << "\nEnter the movie genre: ";
                std::cin >> genre;
                valid();
                std::cout << "\nEnter the link of the movie trailer: ";
                std::cin >> trailer;
                valid();
                std::cout << "\nEnter how many likes does the movie have: ";
                std::cin >> likes;
                valid();
                adm->add_film(title, genre, year, likes, trailer);
                break;
            case 2:
                std::cout << "\nEnter the movie title, which you want to change: ";
                std::cin >> title;
                valid();
                std::cout << "\nEnter the release year of the movie, which you want to change:  ";
                std::cin >> year;
                valid();
                std::cout << "\nEnter the link of the new movie  ";
                std::cin >> new_link;
                valid();
                adm->edit_film(title, year, new_link);
                break;
            case 3:

                std::cout << "\nEnter the movie title, which you want to delete:  ";
                std::cin >> title;
                valid();
                std::cout << "\nEnter the release year of the movie, which you want to delete:  ";
                std::cin >> year;
                valid();
                adm->delete_film(title, year);
                break;
            case 4:
                adm->view_filme();
            default:
                break;

            }
        }
    }
    else {
        auto us = new Repository();
        while (true) {
            std::cout << "Option:\n";
            std::cin >> option;
            switch (option) {
            case 0:
                return false;
            case 1:
                std::cout << "\nEnter a genre: ";
                std::cin >> genre;
                valid();
                us->view_genre(genre);
                break;
            case 2:
                std::cout << "\nEnter the movie title, which you want to delete: ";
                std::cin >> title;
                valid();
                std::cout << "\nEnter the release year of the movie, which you want to delete:  ";
                std::cin >> year;
                valid();
                us->watch(title, year);
                break;

            default:
                break;

            }
        }
    }

}