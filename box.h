#ifndef BOX_H
#define BOX_H

#include "pokemon.h"
#include <string>
using namespace std;

class Box{
    Pokemon * grid [5][6];

    public:
        Box();
        void output();
        void storePokemon(Pokemon * p, int x, int y);

};
#endif