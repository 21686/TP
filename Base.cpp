#include "Base.h"
// make file writing
ofstream fout("FamilyTree.txt", ios::app);

void familyTree::GetDate() {
	cout << "Enter the DAY of Birth" << endl;
	cin >> dayBirth;

	cout << "Enter the MONTH of Birth" << endl;
	cin >> monthBirth;

	cout << "Enter the YEAR of Birth" << endl;
	cin >> yearBirth;
	fout << "Date of birth: " << dayBirth << "." << monthBirth << "." << yearBirth << endl;

	cout << "Enter the AGE" << endl;
	cin >> Age;
	fout << "Age: " << Age << endl;

	cout << "Does the person alive?" << endl;
	cout << "1.Yes" << endl;
	cout << "2.No" << endl;
	int k;
	cin >> k;
	if (k == 2) {// if not alive
		cout << "Enter the DAY of Death" << endl;
		cin >> dayDeath;

		cout << "Enter the MONTH of Death" << endl;
		cin >> monthDeath;

		cout << "Enter the YEAR of Death" << endl;
		cin >> yearDeath;
		fout << "Date of death: " << dayDeath << "." << monthDeath << "." << yearDeath << endl;
	}
	else {
		fout << "Person is alive" << endl;
	}
}

void familyTree::GetINfo() {
	cout << "Enter the NAME" << endl;
	cin >> name;
	fout << "Name " << name << endl;

	cout << "Enter the SURNAME" << endl;
	cin >> surname;
	fout << "Surname: " << surname << endl;

	cout << "Enter the SECOND NAME" << endl;
	cin >> secondName;
	fout << "Second Name: " << secondName << endl;
}

void familyTree::GetStatus() {
	cout << "Does the person married?" << endl;
	cout << "1.Yes" << endl;
	cout << "2.No" << endl;
	int k;
	cin >> k;
	if (k == 1) {// if married
		cout << "Enter the FULL NAME of partner" << endl;
		cin >> partner;
		fout << "Partner: " << partner << endl;
	}
	else {
		partner = *None;
		fout << "Does not married: " << endl;
	}
}
void familyTree::GetChildrenInfo() {
	cout << "Enter the NUMBER of children" << endl;
	cin >> childrenNumber;
	string childName;
	for (int i = 0; i < childrenNumber; i++) {
		cout << "Enter the Name of child" << endl;
		cin >> childName;
		fout << "Child number " << i << ": " << childName << endl;
	}
	fout.close();
}
