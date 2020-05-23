#pragma once
#include <string>
#include <iostream>

using namespace std;

/// <summary>	A film. </summary>
///
/// <remarks>	Administrator, 4/30/2020. </remarks>

class Film
{
private:
	string title, genre, trailer;
	int year, likes;

public:

	/// <summary>	Constructor. </summary>
	///
	/// <remarks>	Administrator, 4/30/2020. </remarks>
	///
	/// <param name="title">  	The title. </param>
	/// <param name="genre">  	The genre. </param>
	/// <param name="year">   	The year. </param>
	/// <param name="likes">  	The likes. </param>
	/// <param name="trailer">	The trailer. </param>

	Film(string title, string genre, int year, int likes, string trailer);

	/// <summary>	Sets a title. </summary>
	///
	/// <remarks>	Administrator, 4/30/2020. </remarks>
	///
	/// <param name="_title">	The title. </param>

	void setTitle(string _title);

	/// <summary>	Sets a genre. </summary>
	///
	/// <remarks>	Administrator, 4/30/2020. </remarks>
	///
	/// <param name="_genre">	The genre. </param>

	void setGenre(string _genre);

	/// <summary>	Sets a trailer. </summary>
	///
	/// <remarks>	Administrator, 4/30/2020. </remarks>
	///
	/// <param name="_trailer">	The trailer. </param>

	void setTrailer(string _trailer);

	/// <summary>	Sets a year. </summary>
	///
	/// <remarks>	Administrator, 4/30/2020. </remarks>
	///
	/// <param name="_year">	The year. </param>

	void setYear(int _year);

	/// <summary>	Sets the likes. </summary>
	///
	/// <remarks>	Administrator, 4/30/2020. </remarks>
	///
	/// <param name="_likes">	The likes. </param>

	void setLikes(int _likes);

	/// <summary>	Gets the title. </summary>
	///
	/// <remarks>	Administrator, 4/30/2020. </remarks>
	///
	/// <returns>	The title. </returns>

	string getTitle();

	/// <summary>	Gets the genre. </summary>
	///
	/// <remarks>	Administrator, 4/30/2020. </remarks>
	///
	/// <returns>	The genre. </returns>

	string getGenre();

	/// <summary>	Gets the trailer. </summary>
	///
	/// <remarks>	Administrator, 4/30/2020. </remarks>
	///
	/// <returns>	The trailer. </returns>

	string getTrailer();

	/// <summary>	Gets the year. </summary>
	///
	/// <remarks>	Administrator, 4/30/2020. </remarks>
	///
	/// <returns>	The year. </returns>

	int getYear();

	/// <summary>	Gets the likes. </summary>
	///
	/// <remarks>	Administrator, 4/30/2020. </remarks>
	///
	/// <returns>	The likes. </returns>

	int getLikes();

	/// <summary>	Convert this  into a string representation. </summary>
	///
	/// <remarks>	Administrator, 4/30/2020. </remarks>
	///
	/// <returns>	A string that represents this. </returns>

	string toString();
};

