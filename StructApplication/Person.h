#pragma once
#include <string>

using std::string;

struct Person
{
private:
	int _age;
	string _name;
public:
	Person(void);
	~Person(void);
	int GetAge();
	const string & GetName();
	void SetAge(int age);
	void SetName(string name);
	void InputFromConsole();
	void PrintToConsole();
};

