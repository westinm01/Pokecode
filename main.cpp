#include <iostream>
#include "pokemon.h"
#include "party.h"
using namespace std;

void test1(){
    //testing
    Pokemon * rowlet=new Pokemon("Rowlet");
    /*out<<"Name: "<<p->getName()<<endl;
    cout<<"Base Stat[0]: "<<p->getBaseStat(0)<<endl;
    cout<<"IV Stat[0]: "<<p->getIVStat(0)<<endl;
    cout<<"EV Stat[0]: "<<p->getEVStat(0)<<endl;*/
    Pokemon * cyndaquil = new Pokemon("Cyndaquil");
    Pokemon * oshawott=new Pokemon("Oshawott");
    Pokemon * pikachu=new Pokemon("Pikachu");
    Pokemon * bewear=new Pokemon("Bewear");
    Pokemon * mimikyu = new Pokemon("Mimikyu");

    Party * party = new Party();
    party->addPokemon(rowlet);
    party->addPokemon(cyndaquil);
    party->outputParty();
    cout<<"___________SWAP____________"<<endl;
    party->swapPokemon(0,1);
    party->outputParty();
    cout<<"__________SetNickName_______"<<endl;
    cyndaquil->setNickName("Gerald");
    party->outputParty();
    cout<<"__________SetCurrentHP(0)__________"<<endl;
    rowlet->setCurrentHP(0);
    party->outputParty();
    cout<<"__________Catch 4 Pokemon_________"<<endl;
    party->addPokemon(oshawott);
    party->addPokemon(pikachu);
    party->addPokemon(bewear);
    party->addPokemon(mimikyu);
    party->outputParty();

    cout<<"___________Fun____________"<<endl;
    party->swapPokemon(0,3);
    party->swapPokemon(3,5);
    bewear->setNickName("Hugger");
    mimikyu->setCurrentHP(0);
    party->outputParty();
}

int main(){
    test1();
    return 0;
}