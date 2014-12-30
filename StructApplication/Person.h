#pragma once
#include <string>

using std::string;

struct Person
{
private:
	int _age;
	string _name;
public:
// Person (const string & name, int age):_age(age)._name(name){}
	Person(void);
	~Person(void);
	int GetAge() const;
	const string & GetName() const ;
	void SetAge(int age);
	void SetName(const string & name);
	void InputFromConsole();
	void PrintToConsole() const ;
};

