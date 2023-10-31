#pragma once
#include "Base.h"
#include <string>
#include <iostream>

class FamilyTree:public Base
{
public:
	string ancestorMale;
	string ancestorFemale;

	FamilyTree() : ancestorMale(), ancestorFemale() {}

	FamilyTree(string _ancestorMale,string _ancestorFemale): ancestorMale(_ancestorMale), ancestorFemale(_ancestorFemale){}

	~FamilyTree() {
		
	}

	void getInfo();
	void deleteLinesAfterString();
	void SHOW();
	void changeObject(string targetString);
	
	void MergeData();
	void Save();
};

