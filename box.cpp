#include "box.h"
#include <iostream>
using namespace std;
Box::Box(){
    for(int i=0; i<5;i++){
        for(int j=0;j<6;j++){
            grid[i][j]=nullptr;
        }
    }
    name="box";
    empty=true;
}

void Box::output(){
    for(int i=0; i<5;i++){
        for(int j=0;j<6;j++){
            if(grid[i][j]!=nullptr){
                cout<<i+1<<", "<<j+1<<": "<< grid[i][j]->getNickName()<<endl;
            }
            
        }
    }
}

void Box::storePokemon(Pokemon * p, int x, int y){
    if(x>4 || y>5 || x<0 || y<0){
        cout<<"storePokemon: Index out of bounds"<<endl;
        return;
    }
    if(grid[x][y]!=nullptr){
        return;// can include swap instead.
    }
    else{
        grid[x][y]=p;
        empty=false;
    }
}

void Box::setName(string s){
    name=s;
}
string Box::getName(){
    return name;
}

bool Box::isEmpty(){
    return empty;
}