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
                director,
                classification;

        int duration,
            releaseDate;

        enum classification {Drama, Adventure, Family, Action, SciFi, Comedy, Animated, Thriller, Other};
        enum genre {G, PG, M, MA15};


};

#endif // movie_h
