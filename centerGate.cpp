#include "centerGate.h"

CenterGate::CenterGate(char initState){
    if(initState == 'L'){
        state = 'L';
    } else if( initState == 'R'){
        state = 'R';
    } else if (initState == 'C'){
        state = 'C';
    } else {
        cout << "Error initialzing state" << endl; 
    }
    cout << state << " INit " << endl; 
}

void CenterGate::toggle(char marble){
    if(marble == '0'){
        if(state == 'C'){state = 'R';}
        else if(state == 'R'){state = 'L';}
        else if(state == 'L'){state = 'C';}
    } else if(marble == '1'){
        if(state == 'C'){state = 'L';}
        else if(state == 'R'){state = 'C';}
        else if(state == 'L'){state = 'R';}
     } else {cout << "Invalid Marble " << endl;}
}

ostream& operator<<(ostream& os, const CenterGate& cg){
    os << cg.state << " "; 
    return os; 
}