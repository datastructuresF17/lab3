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

    return 0;

}

void makeList(string str) {
    for (int i = 0; i < str.length(); i++) {
        cout << str.at(i);
    }
}
