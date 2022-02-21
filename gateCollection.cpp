#include "gateCollection.h"

GateCollection::GateCollection(string initialSet){
    if(initialSet.size() != 4){
        cout << "Error setting up gates " << endl; 
        return; 
    }
    g1 = CenterGate(initialSet[0]);
    g2 = Gate(initialSet[1]);
    g3 = Gate(initialSet[2]);
    g4 = Gate(initialSet[3]);
}
void GateCollection::printConfig(bool end){
    cout << g1.getState() << g2.getState() << g3.getState() << g4.getState();
    if(!end){cout << "->";}
}

ostream& operator<<(ostream& os, const GateCollection& gc){
    os << "Gate g1: " << gc.g1 << "Gate g2: " << gc.g2 << "Gate g3: " << gc.g3 << "Gate g4: "<< gc.g4 << endl;
    return os;
}