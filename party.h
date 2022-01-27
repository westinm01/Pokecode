#ifndef PARTY_H
#define PARTY_H
#include "pokemon.h"
#include <vector>
#include <iostream>

using namespace std;

class Party{
    vector<Pokemon*> partyPokemon;

    public:
        Party(){}
        void addPokemon(Pokemon *p){
            if(partyPokemon.size()>=6){
                return;//error message if you want
            }
            partyPokemon.push_back(p);
        }
        void swapPokemon(int i, int j){
            if(i<partyPokemon.size()&&j<partyPokemon.size()){
                Pokemon * ptr=partyPokemon[i];
                partyPokemon[i]=partyPokemon[j];
                partyPokemon[j]=ptr;
            }
        }
        //Summary in superclass for Party and PC
        void outputParty(){
            int i=1;
            for(Pokemon * p:partyPokemon){
                cout<<i<<") "<<p->getNickName()<<" | Lv."<<p->getLevel()<<" | "<< p->getCurrentHP() << "/"<<p->getBaseStat(0)*2+5<<"HP";
                if(p->getCurrentHP()==0){
                    cout<<" -FNT-";
                }
                cout<<endl;
                i++;
            }
        }

};
#endif