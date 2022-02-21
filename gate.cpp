#include "gate.h"

Gate::Gate(char initState){
    if(initState == 'L'){
        state = 'L';
    } else if( initState == 'R'){
        state = 'R';
    } else {
        cout << "Error initialzing state" << endl; 
    }
}

void Gate::toggle(){
    if(state == 'L'){state = 'R';}
    else if(state == 'R'){state = 'L';} 
}

ostream& operator<<(ostream& os, const Gate& g){
    os << g.state << " ";
    return os; 
}