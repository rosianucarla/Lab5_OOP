#pragma once
#include "Film.h"
#include <vector>

/// <summary>	A repository. </summary>
///
/// <remarks>	Administrator, 4/30/2020. </remarks>

class Repository
{
private:
	vector<Film> filme{ Film("Titanic", "drama", 1990, 100, "https://www.youtube.com/watch?v=2e-eXJ6HgkQ"),
						Film("7 years in Tibet", "action", 1997, 100, "https://www.youtube.com/watch?v=LSyr_vJ5t3k"),
						Film("Turist", "action", 2010, 100, "https://www.youtube.com/watch?v=5XtbLezJtMg"),
						Film("NFS", "action", 2015, 100, "https://www.youtube.com/watch?v=u3wtVI-aJuw"),
						Film("GOT", "sf", 2011, 100, "https://www.youtube.com/watch?v=70V1aWbmlwo"),
						Film("Miami bici", "comedy", 2019, 90, "https://www.youtube.com/watch?v=zUOneia4y6A"),
						Film("Fast and Furious 1", "action", 2001, 100, "https://www.youtube.com/watch?v=2TAOizOnNPo"),
						Film("Fast and Furious 2", "action", 2003, 100, "https://www.youtube.com/watch?v=F_VIM03DXWI"),
						Film("Fast and Furious 3", "action", 2009, 100, "https://www.youtube.com/watch?v=Gl-d_UIhdBw"),
						Film("Fast and Furious 4", "action", 2011, 100, "https://www.youtube.com/watch?v=YXZjANEY6bA"),
	};

	/// <summary>	Gets the size. </summary>
	///
	/// <remarks>	Administrator, 4/30/2020. </remarks>
	///
	/// <returns>	An int. </returns>

	int size();

	int user_size();

	vector<Film> watchlist;

public:

	void view_genre(const string& genre);

	void watch(const string& title, int year);

	void add_film(const string& title, const string& genre, int year, int likes, const string& trailer);

	void view_filme();

	void delete_film(const string& title, int year);

	void edit_film(const string& title, int year, string new_link);

	bool exists_film(const string& title, int year);
};

