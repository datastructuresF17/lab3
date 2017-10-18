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
    int operate = 0;
    float solution = 0;
    float var1 = 0;
    float var2 = 0;
}
void postCalc::setStack(std::string &digit) {
    isValid = true;
    int size = digit.length();
    if (size == 1) {
        isValid = false;
        //getSolution();
    }
    else if (isValid) {
        for(int index = 0; index <= size - 1; index++) {
            cout << "1\n";                                      //BREAD CRUMB
            if(digit.at(index) >= 48 && digit.at(index) <= 57) {
                cout << "2\n";                                   //BREAD CRUMB
                op.push(digit.at(index) - 48);
            }

            else {
                cout << "4\n";                                  //BREAD CRUMB
                float temp = op.peek();
                op.pop();
                if(op.isEmpty()) {
                    cout << "5\n";                              //BREAD CRUMB
                    isValid = false;
                    index = size;
                    //getSolution();
                }
                else {
                    cout << "6\n";                              //BREAD CRUMB
                    var2 = temp;
                    var1 = op.peek();
                    op.pop();
                    cout << "digit.at(index)";                  //BREAD CRUMB
                    operate = digit.at(index);
                    setSolution();
                    index = size;
                }
            }
            cout << "3\n";                                      //BREAD CRUMB
        }
        //op.pop();
    }
}
void postCalc::setSolution() {
    cout << "In set";                                           //BREAD CRUMB
    if (operate == 43)
        op.push(var1 + var2);
    else if (operate == 45)
        op.push(var1 - var2);
    else if (operate == 42)
        op.push(var1 * var2);
    else if (operate == 47)
        op.push(var1 / var2);
    else
        isValid = false;

    solution = op.peek();
    op.pop();
}

void postCalc::getSolution() {
    if (isValid)
        cout << "Answer: " << solution << endl;
    else
        cout << "Invalid Equation\n";

    while (!op.isEmpty())
        op.pop();
}

postCalc::~postCalc() {}
/*
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
    op.pop();
}

void postCalc::display() {
    cout << "Answer: " << solution << endl;
}
*/


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
