#ifndef PC_H
#define PC_H

#include "pokemon.h"
#include "box.h"
#include <string>

using namespace std;

class PC{
    Box* boxes [32];
    int currBox;
    public:
        PC();
        void output();
        void selectBox(int i);
        Box* getCurrBox();
};
#endif