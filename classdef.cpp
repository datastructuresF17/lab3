#include<iostream>
#include<string>
#include<stack>
#include "classdef.h"

using namespace std;

 // ***** stackInterface methods ***** //
bool stackInterface::isEmpty() {
    return mystack.empty();
}

bool stackInterface::push(const std::string &newEntry) {
    mystack.push(newEntry);

    if(mystack.top() == newEntry)
        return true;
    else
        return false;
}

bool stackInterface::pop() {
    if(!mystack.empty()) {
        mystack.pop();
        return true;
    }
    else
        return false;
}

std::string stackInterface::peek() {
    return mystack.top();
}

stackInterface::~stackInterface() {}

 // ***** postCalc methods ***** //
void postCalc::setProblem(std::string &math) {
    problem = math;
}

void postCalc::getSolution() {

}

void postCalc::display() {

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
