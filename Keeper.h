#pragma once
#include "FamilyTree.h"
#include <string>
#include <iostream>


class Keeper :public FamilyTree
{
public:
	FamilyTree* familyArray; 
	int capacity; // Вместимость массива
	int size=1; 

	Keeper(int initialCapacity = 10) : capacity(initialCapacity), size(0) {
		familyArray = new FamilyTree[capacity];
	}

	~Keeper() {
		delete[] familyArray;
	}
	int changeSize(int cnt);
};

