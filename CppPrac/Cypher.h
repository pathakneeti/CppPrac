//
//  Cypher.h
//  CppPrac
//
//  Created by Neeti Pathak on 1/20/14.
//  Copyright (c) 2014 Neeti Pathak. All rights reserved.
//

//#ifndef __CppPrac__Cypher__
//#define __CppPrac__Cypher__
#include <string>
//#endif /* defined(__CppPrac__Cypher__) */



using namespace std;
class Cypher{
	
private:
    string originalMessage;
    string newMessage;
    int shiftValue;
    
public:
	Cypher(int);
    virtual ~Cypher();
	string getNewMessage();
	string getOriginalMessage();
	int getShiftValue();
	void setOriginalMessage( string);
	void setShiftValue(int);
	void doCypher(); //TODO
	char getNewShiftedLetter(char); //TODO
    
    
};

Cypher::Cypher(int shiftValue){
	this->shiftValue = shiftValue;
}

Cypher::~Cypher(){
    originalMessage="";
    newMessage = "";
}

string Cypher::getOriginalMessage(){
	return originalMessage;
}

string Cypher::getNewMessage(){
	return newMessage;
}

int Cypher::getShiftValue(){
	return shiftValue;
}

void Cypher::setShiftValue(int shiftValue){
	this->shiftValue = shiftValue;
}

void Cypher::setOriginalMessage(string originalMessage){
	this->originalMessage = originalMessage;
}

char Cypher::getNewShiftedLetter(char oldLetter){
    char newLetter = oldLetter;
    
    if(oldLetter == 90){
        newLetter = 64;
    }
    else if(oldLetter == 122){
        newLetter = 96;
    }
     if( (oldLetter >63 && oldLetter < 91)|| (oldLetter >95 && oldLetter < 123)){
        newLetter = newLetter + this->shiftValue;
    }
    
    return newLetter;
}

void Cypher::doCypher(){
    //TODO
    newMessage = "";
    for(int i=0; i<originalMessage.size(); i++){
        newMessage += getNewShiftedLetter(originalMessage.at(i));
    }
}



