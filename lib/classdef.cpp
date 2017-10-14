#include<iostream>
#include<string>
#include<stack>

#include "classdef.h"
using namespace std;

void message()
{
    cout << "header message" << endl;
}

void myClass::printMessage()
{
    cout << "object message" << endl;
}
