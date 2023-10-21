#pragma once
#include "Base.h"
#include <string>
#include <iostream>


class Keeper :public familyTree
{
public:
	string ancestorMale;
	string ancestorFemale;

	Keeper() : ancestorMale(), ancestorFemale() {}

	Keeper(string _ancestorMale,string _ancestorFemale): ancestorMale(_ancestorMale), ancestorFemale(_ancestorFemale){}
	~Keeper() {}

	void GetInfo();
	void deleteLinesAfterString(string targetString);
	void showFile();
	void changeObject(string targetString);
	void addPart(string targetString);

};

