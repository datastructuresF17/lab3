#ifndef CLASSDEF_H
#define CLASSDEF_H

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
    stackInterface<float> op;
    int operate;
    float solution;
    float var1;
    float var2;
    bool isValid;

public:
    postCalc();
    void setStack(std::string &digit);
    void setSolution();
    void getSolution();
    ~postCalc();
};

class myClass {
public:
    void printMessage();
};

// function prototypes
void intro();

#endif // CLASSDEF_H
