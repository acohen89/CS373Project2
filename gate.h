
#ifndef GATE_H
#define GATE_H

#include <string> 
#include <vector>
#include <iostream>

using namespace std;


class Gate {      
    public: 
        Gate(char);
        Gate(){};
        friend ostream& operator<<(ostream& os, const Gate& g);
        void toggle();
        char getState(){return state;}
    private: 
        char state;

};

#endif