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
    std::string math;
    int iterate;
    int strSize;
    int stackCount;
    bool done;
public:
    postCalc();                             // Default constructor
    postCalc(std::string &digits);          // Overloaded constructor
    void setStack();                        // Populates stack
    void calculate();                       // performs calculations
    void getSolution();                     // reads solution
    void error();                           // displays errors
    ~postCalc();                            // Destructor
};

// function prototypes
void intro();

#endif // CLASSDEF_H
