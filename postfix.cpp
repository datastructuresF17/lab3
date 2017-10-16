#include<iostream>
#include<string>
#include<stack>
#include "classdef.h"
using namespace std;

//void makeList(string str);                            DELETE WHEN FINISHED

int main() {

    intro();
    string equation;
    postCalc calc;

    cout << "Enter an equation: ";
    cin  >> equation;
    calc.setProblem(equation);
    calc.getSolution();
    calc.display();

    return 0;

}
/*
void makeList(string str) {                             DELETE WHEN FINISHED
    for (int i = 0; i < str.length(); i++) {
        cout << str.at(i);
    }
}
*/
