#include "Cypher.h"
#include <iostream>

int main(){
    Cypher c (5);
    Cypher * pointerToC = &c;
    string hello ("hello");
    c.setOriginalMessage(hello);
    cout << c.getOriginalMessage() << endl;
    
    cout << c.getNewShiftedLetter('Z') << endl;
    
    c.doCypher(); 
    
    cout << c.getNewMessage() << endl;
    
    c.doCypher();
    
    cout << c.getNewMessage() << endl;
    
    delete pointerToC;
    
    cout << "here is after destructor " + c.getNewMessage() << endl;
    
    return 0;
}


