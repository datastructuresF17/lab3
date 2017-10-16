#include<iostream>
#include<string>
#include<stack>
#include "classdef.h"
using namespace std;

void makeList(string str);

int main() {

    cout << "Hello world" << endl;

    myClass obj;

    message();
    obj.printMessage();

    string test1;
    string test2;
    test1 = "52";
    test2 = "2";

    int first = test1.at(0);
    int second= test1.at(1);

    cout << (test1.at(0) - 48) + (test1.at(1) - 48) << endl;
    cout << first - second << endl;
    cout << first * second << endl;
    cout << first / second << endl;

    return 0;

}

void makeList(string str) {
    for (int i = 0; i < str.length(); i++) {
        cout << str.at(i);
    }
}
