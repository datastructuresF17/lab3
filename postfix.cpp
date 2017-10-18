#include<iostream>
#include<string>
#include<stack>
#include "classdef.h"
using namespace std;

int main() {

    intro();
    string equation;
    postCalc calc;

    cout << "Enter an equation: ";
    cin  >> equation;

    while(equation != "0"){
        calc.setStack(equation);
        calc.getSolution();
        cout << "\nEnter another equation: ";
        cin  >> equation;
    }
    cout << "Good bye!\n\n";
    return 0;
}
