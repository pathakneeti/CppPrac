#include "Cypher.h"
#include <iostream>

int main(){
    //Cypher cc (5);
    Cypher * c = new Cypher(5);
    //pointerToC = &c;
    string hello ("hello");
    c->setOriginalMessage(hello);
    cout << c->getOriginalMessage() << endl;
    
    cout << c->getNewShiftedLetter('Z') << endl;
    
    c->doCypher(); 
    
    cout << c->getNewMessage() << endl;
    
    c->doCypher();
    
    cout << c->getNewMessage() << endl;
    
    delete c;
    
    cout << "here is new message after destructor: " + c->getNewMessage() + " original message: " + c->getOriginalMessage() << endl;
    
    return 0;
}


