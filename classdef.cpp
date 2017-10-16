#include<iostream>
#include<string>
#include<stack>
#include "classdef.h"

using namespace std;

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
        if(problem.at(index) != '+' && problem.at(index) != '-' &&
           problem.at(index) != '*' && problem.at(index) != '/') {

            int variable = (problem.at(index) - 48);
            op.push(variable);
        }
        else if(problem.at(index) == '+') {
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
            op.push(var1 - var2);
        }
        else if(problem.at(index) == '/') {
            int var2 = op.peek();
            op.pop();
            int var1 = op.peek();
            op.pop();
            op.push(var1 - var2);
        }
    }
    solution = op.peek();
}

void postCalc::display() {
    cout << "Answer: " << solution << endl;
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
