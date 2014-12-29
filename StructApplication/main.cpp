#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include "person.h"


using std::cout;
using std::cin;
using std::string;
using std::vector;
using std::for_each;
using std::begin;
using std::end;
using std::endl;

int main(int argc, char * args [])
{
	bool exit = false;
	char answer;
	vector<Person *> persons;
	do
	{
		auto isCorrectAnswer = false;
		do
		{
			cout << "Do you whant to enter the person? (y/n) : ";
			cin >> answer;
			isCorrectAnswer = toupper(answer) == 'Y' || toupper(answer) == 'N';

			if (!isCorrectAnswer)
			{
				cout << "Incorrect answer. Use only \"y\" or \"n\"" << endl;
			}
		}
		while(!isCorrectAnswer);

		
		if (toupper(answer) == 'Y')
		{
			auto person = new Person(); 
			person->InputFromConsole();
			persons.push_back(person);
		}
		else
		{
			exit = true;
		}
	}
	while (!exit);

	for (auto person : persons)
	{
		person->PrintToConsole();
	}

	for (auto person : persons)
	{
		delete person;
	}
	system("pause");
}