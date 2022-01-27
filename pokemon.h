#ifndef POKEMON_H
#define POKEMON_H

#include <string>
using namespace std;

class Pokemon{
    int currentHP;
    bool isFainted;
    int baseStats[6];//0 HP, 1 ATK, 2 DEF, 3 SPATK, 4 SPDEF, 5 SPEED
    int EVStats[6];
    int IVStats[6];
    int level;
    string name;
    string nickName;
    int baseFriendship;
    int happiness;
    double height;
    double weight;

    int gender;
    int nature;//enum
    int shape;//enum
    int color;//enum
    int type1;//enum
    int type2;//enum
    int eggGroup;//enum
    int levelRate;//enum
    int statusCondition;//enum

    int catchRate;
    int hatchTime;
    int baseExperienceYield;
    int evYield;
    string ot;
    public:
        Pokemon();
        Pokemon(string n);
        void setName(string newName);
        string getName();
        string getNickName();
        void setNickName(string s);

        int getBaseStat(int index);
        void setIVStat(int index, int val);
        int getIVStat(int index);
        void setEVStat(int index, int val);
        int getEVStat(int index);

        void setCurrentHP(int newHP);
        int getCurrentHP();
        int getLevel();
        
    //vector<Move> moves;
    //vector<Move> learnableMoves;
    //Ability ability1;
    //Ability ability2;
    //Ability hidden;
    //Footprint
    //Sprite
    //





};
#endif