
#ifndef CLASSDEF_H
#define CLASSDEF_H

#include<stack>
// class prototypes

template<class T>
class stackInterface {
private:
    std::stack<T> mystack;
public:
    virtual bool isEmpty();
    virtual bool push(const T &newEntry);
    virtual bool pop();
    virtual T peek();
    virtual ~stackInterface();
    // Credit: F.Carrano & T.Henry
    // "Data Abstraction & Problem Solving
    //  with Walls and Mirrors C++ (7th ed)"
    // Modified by: Chad Palmer
};

class postCalc {
private:
    std::string problem;
    float solution;
    stackInterface<std::string> op;
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
