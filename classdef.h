
#ifndef CLASSDEF_H
#define CLASSDEF_H

#include<string>
#include<stack>

// class prototypes

template<class T>
class stackInterface {                  // Credit: F.Carrano & T.Henry
private:                                // "Data Abstraction & Problem Solving
    std::stack<T> mystack;              //  with Walls and Mirrors C++ (7th ed)"
public:                                 // Modified by: Chad Palmer
    bool isEmpty();
    bool push(const T &newEntry);
    bool pop();
    T peek();
    ~stackInterface();
};

class postCalc {
private:
    std::string problem;
    float solution;
    stackInterface<float> op;
public:
    void setProblem(std::string &math);
    void getSolution();
    void display();
    ~postCalc();
};

class myClass {
public:
    void printMessage();
};

// function prototypes

void intro();


#endif // CLASSDEF_H
