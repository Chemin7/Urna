#ifndef EQUIPO_H_INCLUDED
#define EQUIPO_H_INCLUDED
#include <string>

class Team{
private:
    int votes;

    std::string name;
    float percentage;

    void setPercentage();

public:
    Team(std::string);

    void setPercentage(int& );

    int getVotes();
    float getPercentage();

    Team& operator++ ();


};
using namespace std;

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



void Team::setPercentage(int& totalVotes)
{

    percentage = votes*100 /totalVotes;
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
