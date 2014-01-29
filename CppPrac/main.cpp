#include "Cypher.h"
#include <iostream>

int main(){
    /*
     
     MINI LESSON ON NEW - DELETE 
    heap is for new-delete and if you dont delete you risk memory leak
    stack is if you dont use new, the object automatically gets destroyed when main is done. when you are out of scope. here you risk stack overflow if you make too many strings hello for example. 
     
    note: not that this will always be so noticeable, BUT memory allocation and deallocation on the heap take resources and time. there is that overhead when you use new-delete. people suggest that you use this wisely. basically whenever you want to dynamically allocate memory, and when you want to reference the object outside scope 
     
    */
    
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


