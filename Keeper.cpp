#include "Keeper.h"

Keeper user;

void Keeper::GetInfo()
{
	//made in Base.cpp
		//cout << "Enter the NAME" << endl;
		//cin >> user.name;
		//cout << "Enter the SURNAME" << endl;
		//cin >> user.surname;
		//cout << "Enter the SECOND NAME" << endl;
		//cin >> user.secondName;
	user.GetInfo();
	user.GetDate();
	user.GetStatus();
	user.GetChildrenInfo();
	cout << "Enter the FULL NAME of male parent" << endl;
	cin >> user.ancestorMale;
	cout << "Enter the FULL NAME of female parent" << endl;
	cin >> user.ancestorFemale;
	
}
