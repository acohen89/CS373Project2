#include <fstream>
#include <iostream>
#include <vector>
#include <stdio.h>
#include <string>
#include <stdbool.h>
using namespace std; 

#include "gate.h"
#include "centerGate.h"
#include "gateCollection.h"

char dropMarble(GateCollection *gc, char marble, bool end = false){
    if(gc->getG1().getState() == 'L'){
        char ret = '0';   
        gc->toggleG1(marble);
        if(gc->getG2().getState() == 'L'){ret = 'B';}
        else if(gc->getG2().getState() == 'R'){ret = 'C';}
        gc->toggleG2();
        gc->printConfig(end);
        return ret;

    }
    else if(gc->getG1().getState() == 'R'){
        char ret = '0';  
        gc->toggleG1(marble);
        if(gc->getG4().getState() == 'L'){ret = 'D';}
        else if(gc->getG4().getState() == 'R'){ret = 'E';}
        gc->toggleG4();
        gc->printConfig(end);
        return ret;
    }
    else if(gc->getG1().getState() == 'C'){
        char ret = '0';  
        gc->toggleG1(marble);
        if(gc->getG3().getState() == 'L'){ret = 'C';}
        else if(gc->getG3().getState() == 'R'){ret = 'D';}
        gc->toggleG3();
        gc->printConfig(end);
        return ret;

    } else {cout << "G1 Bad state";}
    return '0';
}


int main(int argc, char *argv[]){
    string initalGateSet = argv[1];
    string input = argv[2]; 
    GateCollection *gc = new GateCollection(initalGateSet);
    gc->printConfig(false);
    for(int i = 0; i < input.size(); i++){
        if(i == input.size() - 1){
            char ending = dropMarble(gc, input[i], true);
            cout << " " << ending << endl;
        } else (dropMarble(gc, input[i])); 
    }

    return 0; 
}