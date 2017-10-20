#include<iostream>
#include<string>
#include<stack>
#include "classdef.h"
using namespace std;

    // CLASS DEFINITIONS //

 // ***** stackInterface methods ***** //
template<class T>
bool stackInterface<T>::isEmpty() {
    return mystack.empty();
}

template<class T>
bool stackInterface<T>::push(const T &newEntry) {
    mystack.push(newEntry);
    if(mystack.top() == newEntry)
        return true;
    else
        return false;
}

template<class T>
bool stackInterface<T>::pop() {
    if(!mystack.empty()) {
        mystack.pop();
        return true;
    }
    else
        return false;
}

template<class T>
T stackInterface<T>::peek() {
    return mystack.top();
}

template<class T>
stackInterface<T>::~stackInterface() {}

 // ***** postCalc methods ***** //
postCalc::postCalc() {
    std::string math = " ";
    int iterate = 0;
    int strSize = 0;
    int stackCount = 0;
    bool done = false;
}

postCalc::postCalc(std::string &digits) {
    math = digits;
    iterate = 0;
    strSize = digits.length();
    stackCount = 0;
    done = false;
}

void postCalc::setStack() {
    for (iterate; iterate < strSize; iterate++ && !done) {
        if (math.at(iterate) >= 48 && math.at(iterate) <= 57) {
            op.push(math.at(iterate) - 48);
            stackCount++;
        }
        else {
            calculate();
        }
    }
}

void postCalc::calculate() {
    if (stackCount < 2)
        error();
    else if (stackCount >= 2) {
        float var2 = op.peek();
        op.pop();
        stackCount--;
        float var1 = op.peek();
        op.pop();
        stackCount--;
        int operate = math.at(iterate);

        if (operate == 43)
            op.push(var1 + var2);
        else if (operate == 45)
            op.push(var1 - var2);
        else if (operate == 42)
            op.push(var1 * var2);
        else if (operate == 47 && var2 != 0)
            op.push(var1 / var2);
        else
            error();

        stackCount++;
    }
}

void postCalc::getSolution() {
    if (stackCount == 1 && !done) {
        float result = op.peek();
        op.pop();
        cout << "Answer: " << result;
    }
    else {
        cout << "Answer: Undefined";
    }
}

void postCalc::error() {
    cout << "Invalid equation or operator entered\n";
    done = true;
}

postCalc::~postCalc() {}

    // FUNCTION DEFINITIONS //

void intro()
{
    cout << "\n<><><><><><><><><><><><><><><><><><><><><><><><>\n"
         << "| This program is a simple postfix calculator. |\n"
         << "| It supports single digit variables and       |\n"
         << "| '+', '-', '*', '/' operands.                 |\n"
         << "<><><><><><><><><><><><><><><><><><><><><><><><>\n\n";

    cout << "Example: (5 - 3 + 2) is entered as (253-+)\n\n";
}
