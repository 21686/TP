#pragma once
#include "Base.h"

class Keeper:public familyTree
{
public:
	string ancestorMale;
	string ancestorFemale;
	void GetInfo();
	void deleteInfo();
};

