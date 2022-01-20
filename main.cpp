#include <iostream>
#include "pokemon.h"
using namespace std;

int main(){
    //testing
    Pokemon * p=new Pokemon("Rowlet");
    cout<<"Name: "<<p->getName()<<endl;
    cout<<"Base Stat[0]: "<<p->getBaseStat(0)<<endl;
    cout<<"IV Stat[0]: "<<p->getIVStat(0)<<endl;
    cout<<"EV Stat[0]: "<<p->getEVStat(0)<<endl;
    return 0;
}