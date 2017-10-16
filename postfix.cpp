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
        calc.setProblem(equation);
        calc.getSolution();
        calc.display();
        cout << "\nEnter another equation: ";
        cin  >> equation;
    }
    cout << "Good bye!\n";
    return 0;
}
