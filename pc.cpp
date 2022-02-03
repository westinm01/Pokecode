#include "pc.h"
#include <iostream>
#include <string>
using namespace std;

PC::PC(){
    for(int i=0;i<32;i++){
        boxes[i]=new Box();
        boxes[i]->setName("Box " + to_string(i));
    }
}

void PC::output(){
    for(Box* b: boxes){
        
        //check if box is empty
        if(!b->isEmpty()){
            cout<<b->getName()<<endl;
            b->output();
        }
    }
}

void PC::selectBox(int i){
    if(i<32 && i>=0){
        currBox=i;
    }
}

Box * PC::getCurrBox(){
    return boxes[currBox];
}