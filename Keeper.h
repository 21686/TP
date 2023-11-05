#pragma once
#include "Base.h"
#include "FamilyTree.h"
#include <string>
#include <iostream>
using namespace std;

class Keeper : public FamilyTree
{
public:
	FamilyTree* familyArray; 
	int capacity; 
	int size; 

	~Keeper() {
		delete[] familyArray;
	}

	Keeper(int initialCapacity=0) : capacity(initialCapacity), size(0) {
		familyArray = new FamilyTree[capacity];
		cout << "Default constructor called for Keeper." << endl;

	}

	int changeSize(int cnt);
	void resize();
	void shrink();
	void getInfo();
	void deleteLinesAfterString();
	void SHOW();
	void changeObject(string targetString);
	void resizeMerge();
	void MergeData();
	void Save();
};

