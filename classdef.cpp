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
void postCalc::setProblem(std::string &math) {
    problem = math;
}

void postCalc::getSolution() {
    int size = problem.length();

    for(int index = 0; index < size; index++) {
        if(problem.at(index) >= 48 && problem.at(index) <= 57) {
            int variable = (problem.at(index) - 48);
            op.push(variable);
        }
        else if(problem.at(index) == '+') {         // 6.3.1 Algorithm
            int var2 = op.peek();
            op.pop();
            int var1 = op.peek();
            op.pop();
            op.push(var1 + var2);
        }
        else if(problem.at(index) == '-') {
            int var2 = op.peek();
            op.pop();
            int var1 = op.peek();
            op.pop();
            op.push(var1 - var2);
        }
        else if(problem.at(index) == '*') {
            int var2 = op.peek();
            op.pop();
            int var1 = op.peek();
            op.pop();
            op.push(var1 * var2);
        }
        else if(problem.at(index) == '/') {
            float var2 = op.peek();
            op.pop();
            float var1 = op.peek();
            op.pop();
            op.push(var1 / var2);
        }
    }
    solution = op.peek();
}

void postCalc::display() {
    cout << "Answer: " << solution << endl;
}

postCalc::~postCalc() {}

    // FUNCTION DEFINITIONS //

void intro()
{
    cout << "<><><><><><><><><><><><><><><><><><><><><><><>\n"
         << " This program is a simple postfix calculator.\n"
         << " It supports single digit variables and\n"
         << "'+', '-', '*', '/' operands.\n"
         << "<><><><><><><><><><><><><><><><><><><><><><><>\n\n";

    cout << "Example: (5 - 3 + 2) is entered as (253-+)\n\n";
}
