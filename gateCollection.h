
#ifndef GATECOLLECTION_H
#define GATECOLLECTION_H

#include <string> 
#include <vector>
#include <iostream>

using namespace std;

#include "gate.h"
#include "centerGate.h"

class GateCollection {      
    private:
        CenterGate g1; 
        Gate g2; 
        Gate g3; 
        Gate g4; 
    public: 
        GateCollection(string); 
        friend ostream& operator<<(ostream& os, const GateCollection& gc);
        void toggleG1(char marble){g1.toggle(marble);}
        void toggleG2(){g2.toggle();}
        void toggleG3(){g3.toggle();}
        void toggleG4(){g4.toggle();}
        CenterGate getG1(){return g1;}
        Gate getG2(){return g2;}
        Gate getG3(){return g3;}
        Gate getG4(){return g4;}
        void printConfig(bool);

        
};

#endif