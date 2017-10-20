// Author:   Chad Palmer
// Semester: Fall 2017
// Class:    Data Structures (COSC 2436-004)
// Lab: 3

#include<iostream>
#include<string>
#include<stack>
#include "classdef.h"
using namespace std;

int main() {

    intro();
    postCalc *calc;
    string equation;
    float answer;

    cout << "Enter an equation: ";
    cin  >> equation;

    while(equation != "0"){
        calc = new postCalc(equation);
        calc->setStack();
        calc->getSolution();
        cout << "\n\nEnter another equation: ";
        cin  >> equation;
        delete calc;
    }
    cout << "Good bye!\n\n";
    return 0;
}
