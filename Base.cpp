#include "Base.h"
// make file writing
familyTree d1;

void familyTree::GetDate() {
	cout << "Enter the DAY of Birth" << endl;
	cin >> d1.dayBirth;
	cout << "Enter the MONTH of Birth" << endl;
	cin >> d1.monthBirth;
	cout << "Enter the YEAR of Birth" << endl;
	cin >> d1.yearBirth;
	cout << "Enter the AGE" << endl;
	cin >> d1.Age;
	cout << "Does the person alive?" << endl;
	cout << "1.Yes" << endl;
	cout << "2.No" << endl;
	int k;
	cin >> k;
	if (k == 2) {// if alive
		cout << "Enter the DAY of Birth" << endl;
		cin >> d1.dayDeath;
		cout << "Enter the MONTH of Birth" << endl;
		cin >> d1.monthDeath;
		cout << "Enter the YEAR of Birth" << endl;
		cin >> d1.yearDeath;
	}
	else {
		// add exception
	}
}

void familyTree::GetInfo() {
	cout << "Enter the NAME" << endl;
	cin >> d1.name;
	cout << "Enter the SURNAME" << endl;
	cin >> d1.surname;
	cout << "Enter the SECOND NAME" << endl;
	cin >> d1.secondName;
}

void familyTree::GetStatus() {
	cout << "Does the person married?" << endl;
	cout << "1.Yes" << endl;
	cout << "2.No" << endl;
	int k;
	cin >> k;
	if (k == 2) {// if alive
		cout << "Enter the FULL NAME of partner" << endl;
		cin >> d1.partner;
	}
	else {
		d1.partner = *None;
	}
}
void familyTree::GetChildrenInfo() {
	cout << "Enter the NUMBER of children" << endl;
	cin >> d1.childrenNumber;
	for (int i = 0; i < d1.childrenNumber; i++) {
		//write in file
	}
}
