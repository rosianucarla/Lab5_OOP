#include "Film.h"

Film::Film(string title, string genre, int year, int likes, string trailer)
{
	this->title = title;
	this->genre = genre;
	this->year = year;
	this->likes = likes;
	this->trailer = trailer;
}

void Film::setTitle(string _title)
{
	this->title = _title;
}

void Film::setGenre(string _genre)
{
	this->genre = _genre;
}

void Film::setTrailer(string _trailer)
{
	this->trailer = _trailer;
}

void Film::setYear(int _year)
{
	this->year = _year;
}

void Film::setLikes(int _likes)
{
	this->likes = _likes;
}

string Film::getTitle()
{
	return this->title;
}

string Film::getGenre()
{
	return this->genre;
}

string Film::getTrailer()
{
	return this->trailer;
}

int Film::getYear()
{
	return this->year;
}

int Film::getLikes()
{
	return this->likes;
}

string Film::toString()
{
	return "The movie with the name: " + getTitle() + " from the year " + to_string(getYear()) + " " + " and has the following genre:" + getGenre() +
		" and has so many likes: " + to_string(getLikes()) + "\n";
}
