#include <iostream>
#include "pokemon.h"
#include "party.h"
#include "box.h"
#include "pc.h"
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

void test2(){
    Pokemon * cyndaquil = new Pokemon("Cyndaquil");
    Pokemon * oshawott=new Pokemon("Oshawott");
    Pokemon * pikachu=new Pokemon("Pikachu");
    Box* box1=new Box();
    box1->storePokemon(cyndaquil,0,0);
    box1->storePokemon(oshawott,3,4);
    box1->storePokemon(pikachu,4,5);
    box1->output();

}

void test3(){
    PC* someonesPC = new PC();
    //32 empty boxes!
    someonesPC->selectBox(22);
    Box * ptr = someonesPC->getCurrBox();
    Pokemon * cyndaquil = new Pokemon("Cyndaquil");
    Pokemon * oshawott=new Pokemon("Oshawott");
    Pokemon * pikachu=new Pokemon("Pikachu");
    ptr->storePokemon(cyndaquil,0,0);
    ptr->storePokemon(oshawott,3,4);
    someonesPC->selectBox(40);
    someonesPC->selectBox(5);
    someonesPC->getCurrBox()->storePokemon(pikachu,4,5);
    someonesPC->output();
    
}
int main(){
    test3();
    return 0;
}