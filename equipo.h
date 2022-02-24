#ifndef EQUIPO_H_INCLUDED
#define EQUIPO_H_INCLUDED
#include <string>
#include "urna.h"
class Team: public Urna{
private:
    int votes;
    std::string name;

public:
    Team();
    Team(std::string);

    void setPercentage(float);

    float getPercentage();
    int getVotes();

    Team& operator++ ();


};
using namespace std;

Team::Team()
{

}


Team::Team(string n)
{
    name=n;
    votes = 0;
    percentage = 0;

}

Team& Team::operator++()
{
    ++votes;

    return *this;
}



void Team::setPercentage(float p)
{

    percentage = p;
}


int Team::getVotes()
{
    return votes;
}

float Team::getPercentage()
{

    return percentage;
}

#endif // EQUIPO_H_INCLUDED
