#ifndef BOX_H
#define BOX_H

#include "pokemon.h"
#include <string>
using namespace std;

class Box{
    Pokemon * grid [5][6];
    bool empty;
    string name;
    public:
        Box();
        void output();
        void storePokemon(Pokemon * p, int x, int y);
        void setName(string s);
        string getName();
        bool isEmpty();
};
#endif