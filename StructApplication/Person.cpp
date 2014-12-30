#include <iostream>
#include "Person.h"

using std::cin;
using std::cout;
using std::endl;
using std::to_string;


Person::Person(void) :
	_age(0),
	_name("")
{
}


Person::~Person(void)
{
}

int Person::GetAge() const
{
	return _age;
}

const string & Person::GetName() const 
{
	return _name;
}

void Person::SetAge(int age)
{
	if (age <= 0)
	{
		throw std::invalid_argument("Invalid age "+std::to_string(age));
	}
	_age = age;
}

void Person::SetName(const string & name)
{
	_name = name;
}

void Person::InputFromConsole()
{
	cout << "Enter name: ";
	cin >> _name;
	do
	{
		cout << "Enter age: ";
		cin >> _age;
		if (_age <= 0)
		{
			cout << "Incorrect age" << endl;
		}

	} while(_age <= 0);
}

void Person::PrintToConsole() const 
{
	cout << "Name: " << _name << "\tAge:" << to_string(_age) << endl;
}
