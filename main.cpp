#include <iostream>
#include "equipo.h"
#include "urna.h"
#include "validate.h"
using namespace std;

void menu() {
    int totalvotes(0), opc,rep;
    string str_opc,str_rep;

    Team atlas("Atlas");
    Team chivas("Chivas");
    Team toluca("Toluca");
    Urna u;

    do {
        cout<<"Menu"<<endl;
        cout<<"Candidato -> Atlas [1]"<<endl;
        cout<<"Candidato -> Chivas [2]"<<endl;
        cout<<"Candidato -> Toluca [3]"<<endl;
        do{
        cout<<"Seleccione opcion: ";
        cin>>str_opc;
        }while( !(isReal(str_opc)) );

        opc = stoi(str_opc);

        switch(opc) {
            case 1:
                ++atlas;

                break;
            case 2:
                ++chivas;

                break;
            case 3:
                ++toluca;


                break;
            }

        atlas.setPorcentajeTotal(atlas.getVotes(),chivas.getVotes(),toluca.getVotes(),atlas.getVotes());
        chivas.setPorcentajeTotal(atlas.getVotes(),chivas.getVotes(),toluca.getVotes(),chivas.getVotes());
        toluca.setPorcentajeTotal(atlas.getVotes(),chivas.getVotes(),toluca.getVotes(),toluca.getVotes());

        cout<<"*********VOTOS**********"<<endl;
        cout<<" Atlas: "<<atlas.getVotes()<<endl;
        cout<<" Chivas: "<<chivas.getVotes()<<endl;
        cout<<" Toluca: "<<toluca.getVotes()<<endl;
        cout<<endl;
        cout<<endl;
        cout<<"*****PORCENTAJES********"<<endl;
        cout<<" % Atlas "<< atlas.getPercentage() <<endl;
        cout<<" % Chivas "<< chivas.getPercentage() <<endl;
        cout<<" % Toluca "<< toluca.getPercentage() <<endl;
        cout<<endl;
        cout<<endl;
        do{
        cout<<"Ingresar nuevo voto 1 [si] 2[no]: ";
        cin>>str_rep;
        }while( !( isReal(str_rep) ) or !(str_rep == "1" or str_rep== "2") );

        rep = stoi(str_rep);
        system("cls");
        }
    while(rep == 1);
    }


int main() {

    menu();

    return 0;
    }
