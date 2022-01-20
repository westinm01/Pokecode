#include "pokemon.h"

Pokemon::Pokemon(){

}
Pokemon::Pokemon(string n){
    this->name=n;
    for(int i=0;i<6;i++){
        baseStats[i]=1;
        EVStats[i]=0;
        IVStats[i]=0;
    }
    currentHP=baseStats[0];
    baseFriendship=0;
    happiness=baseFriendship;
    height=1;
    weight=1;

    nature=0;
    shape=0;
    color=0;
    type1=0;
    type2=0;
    eggGroup=0;
    levelRate=0;
    statusCondition=0;

    catchRate=150;
    hatchTime=2570;
    baseExperienceYield=38;
    evYield=11;//the first digit indicates the ev, second indicates how much.
    ot="";

}

void Pokemon::setName(string newName){
    name=newName;
}
string Pokemon::getName(){
    return name;
}
int Pokemon::getBaseStat(int index){
    return baseStats[index];
}
void Pokemon::setIVStat(int index,int val){
    IVStats[index]=val;
}
void Pokemon::setEVStat(int index, int val){
    EVStats[index]=val;
}
int Pokemon::getIVStat(int index){
    return IVStats[index];
}
int Pokemon::getEVStat(int index){
    return EVStats[index];
}

void Pokemon::setCurrentHP(int newHP){
    currentHP=newHP;
}
int  Pokemon::getCurrentHP(){
    return currentHP;
}