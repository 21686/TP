#pragma once
#include "Base.h"
#include <string>
#include <iostream>

class FamilyTree : public Base
{
public:
	string ancestorMale;
	string ancestorFemale;
	string name;
	string surname;
	string secondName;
	string partner;
	int childrenNumber;
	int dayBirth;
	int monthBirth;
	int yearBirth;
	int Age;
	int dayDeath;
	int monthDeath;
	int yearDeath;
	int k = 2;
	string* children;

	void GetDate();
	void GetStatus();
	void GetINfo();
	void GetChildrenInfo();

	//FamilyTree(string _ancestorMale,string _ancestorFemale): ancestorMale(_ancestorMale), ancestorFemale(_ancestorFemale){
		//cout << "Parameterized constructor called for FamilyTree." << endl;
	//}


	FamilyTree() : name(""), surname(""), secondName(""), partner(""), childrenNumber(0),
		dayBirth(0), monthBirth(0), yearBirth(0), Age(0),
		dayDeath(0), monthDeath(0), yearDeath(0), ancestorMale(""), ancestorFemale("") {
		children = new string[k];
		cout << "Default constructor called for FamilyTree." << endl;
	}

	FamilyTree(const FamilyTree& other) {
		name = other.name;
		surname = other.surname;
		secondName = other.secondName;
		cout << "Copy constructor called 4 ." << endl;

	}

	FamilyTree& operator=(const FamilyTree& other);

};

