#ifndef URNA_H_INCLUDED
#define URNA_H_INCLUDED
#include "equipo.h"

class Urna{
protected:
    float percentage;
public:
    void setPorcentajeTotal(int ,int, int,int );
};

void Urna::setPorcentajeTotal(int a, int b, int c,int voto)
{
    int  totalVotes =  a + b +c;

    percentage = voto *100 / totalVotes;
}



#endif // URNA_H_INCLUDED
