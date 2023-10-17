#include "Keeper.h"
#include <string>

void Keeper::GetInfo()
{

	GetINfo();
	GetDate();
	GetStatus();
	GetChildrenInfo();
	ofstream fout("FamilyTree.txt", ios::app);
	cout << "Enter the FULL NAME of male parent" << endl;
	cin >> ancestorMale;
	fout << "Father: " << ancestorMale << endl;
	cout << "Enter the FULL NAME of female parent" << endl;
	cin >> ancestorFemale;
	fout << "Mother: " << ancestorFemale << endl;
	fout << endl;
	fout.close();
}

void Keeper::deleteInfo() {
	string key, line;
	cout << "Enter the Name of man whose data you want to change" << endl;
	cin >> key;
	ofstream fout("FamilyTree.txt", ios::app);
	while (key != getline(fout, line));
}
