#pragma once
#include <iostream>
#include <string>
#include <exception>
using namespace std;

class Error1
	:public exception
{
	string message;
public:
	Error1(string message)
		: message(message)
	{}
	string What() { return message; }
};

