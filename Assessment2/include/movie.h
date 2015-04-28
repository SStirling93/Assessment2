#ifndef movie_h
#define movie_h
#include <iostream>
#include <string>


using namespace std;

class Movie
{
    public:
        Movie();
        ~Movie();


    private:
        // Movie Variables

        string  title,
                director;

        int duration,
            releaseDate;

        enum Classification {Drama, Adventure, Family, Action, SciFi, Comedy, Animated, Thriller, Other};
        enum Genre {G, PG, M, MA15};

        Classification classification;
        Genre genre;


};

#endif // movie_h
