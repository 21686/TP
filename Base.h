#pragma once
#include <iostream>
#include <fstream>
#include <string>


using namespace std;
class familyTree
{
public:
	string name;
	string surname;
	string secondName;
	string partner;
	int childrenNumber = 0;
	// Набор основных параметров для конкретного члена семьи. Дата реализована отдельным классом
	int dayBirth = 0;
	int monthBirth = 0;
	int yearBirth = 0;
	int Age = 0;
	int dayDeath = 0;
	int monthDeath = 0;
	int yearDeath = 0;

	// Конструктор по умолчанию
	familyTree() : name(), surname(), secondName(), partner(), childrenNumber(0),
		dayBirth(0), monthBirth(0), yearBirth(0), Age(0), dayDeath(0), monthDeath(0), yearDeath(0) {}

	familyTree(string _name, string _surname, string _secondName, string _partner, int _childrenNumber,
		int _dayBirth, int _monthBirth, int _yearBirth, int _Age, int _dayDeath, int _monthDeath, int _yearDeath)
		: name(_name), surname(_surname), secondName(_secondName), partner(_partner), childrenNumber(_childrenNumber),
		dayBirth(_dayBirth), monthBirth(_monthBirth), yearBirth(_yearBirth), Age(_Age), dayDeath(_dayDeath),
		monthDeath(_monthDeath), yearDeath(_yearDeath) {}

	~familyTree() {}

	void GetDate();
	void GetStatus();
	void GetINfo();
	void GetChildrenInfo();


};



