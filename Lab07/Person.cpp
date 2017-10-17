#include "Person.h"
#include <cstdio>
#include <iostream>
using namespace std;

void Person::setVals(char na[], int a)
{
	strcpy_s(name, na);
	age = a;
}

void Person::print()
{
	cout << "The name is: " << name << endl;
	cout << "The age of " << name << " is " << age << endl;
	cout << endl;
}