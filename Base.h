#pragma once
#include <iostream>
#include <fstream>
#define None "none";

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
	void GetDate();
	void GetStatus();
	void GetINfo();
	void GetChildrenInfo();
};

