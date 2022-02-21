
#ifndef CENTERGATE_H
#define CENTERGATE_H

#include <string> 
#include <vector>
#include <iostream>

using namespace std;


class CenterGate {      
    public: 
        CenterGate(char);
        CenterGate(){};
        friend ostream& operator<<(ostream& os, const CenterGate& cg);
        void toggle(char);
        char getState(){return state;}
    private: 
        char state;
};

#endif