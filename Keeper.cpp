#include "Keeper.h"


void Keeper::GetInfo()
{
	//made in Base.cpp
		//cout << "Enter the NAME" << endl;
		//cin >> user.name;
		//cout << "Enter the SURNAME" << endl;
		//cin >> user.surname;
		//cout << "Enter the SECOND NAME" << endl;
		//cin >> user.secondName;
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
