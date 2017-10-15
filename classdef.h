
#ifndef CLASSDEF_H
#define CLASSDEF_H

#include<string>
#include<stack>
// class prototypes


class stackInterface {                  // Credit: F.Carrano & T.Henry
private:                                // "Data Abstraction & Problem Solving
    std::stack<std::string> mystack;    //  with Walls and Mirrors C++ (7th ed)"
public:                                 // Modified by: Chad Palmer
    bool isEmpty();
    bool push(const std::string &newEntry);
    bool pop();
    std::string peek();
    virtual ~stackInterface();
};

class postCalc {
private:
    std::string problem;
    float solution;
    stackInterface op;
public:
    void setProblem(std::string &math);
    void getSolution();
    void display();
};

class myClass {
public:
    void printMessage();
};
// function prototypes

void message();


#endif // CLASSDEF_H
