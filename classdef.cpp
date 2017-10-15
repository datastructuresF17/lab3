#include<iostream>
#include<string>
#include<stack>
#include "classdef.h"

using namespace std;


virtual bool stackInterface::isEmpty() {

}

virtual bool stackInterface::push(const T &newEntry) {

}

virtual bool stackInterface::pop() {

}

virtual T stackInterface::peek() {

}

virtual stackInterface::~stackInterface() {
    
}



////////////////////////////////////////////////////////
void message()
{
    cout << "header message" << endl;
}

void myClass::printMessage()
{
    cout << "object message" << endl;
}
