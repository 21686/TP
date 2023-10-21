#include "Base.h"
// make file writing
ofstream fout("FamilyTree.txt", ios::app);

void familyTree::GetDate() {
	cout << "Enter the DAY of Birth" << endl;
	cin >> dayBirth;
	try {
		if (dayBirth > 31 || dayBirth <= 0) {
			throw std::out_of_range("Enter the CORRECT DAY of Birth");
		}
	}
	catch (const std::out_of_range& e) {
		std::cerr << "Error: " << e.what() << std::endl;
		std::cout << "Enter the correct DAY";
		std::cin >> dayBirth;
	}

	cout << "Enter the MONTH of Birth" << endl;
	cin >> monthBirth;
	try {
		if (monthBirth > 12 || monthBirth <= 0) {
			throw std::out_of_range("Enter the CORRECT MONTH of Birth");
		}
	}
	catch (const std::out_of_range& e) {
		std::cerr << "Îøèáêà: " << e.what() << std::endl;
	}


	cout << "Enter the YEAR of Birth" << endl;
	cin >> yearBirth;
	try {
		if (yearBirth > 2023 || yearBirth <= 1900) {
			throw std::out_of_range("Enter the CORRECT YEAR of Birth");
		}
	}
	catch (const std::out_of_range& e) {
		std::cerr << "Îøèáêà: " << e.what() << std::endl;
	}

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
		try {
			if (dayDeath > 31 || dayDeath <= 0) {
				throw std::out_of_range("Enter the CORRECT DAY of Death");
			}
		}
		catch (const std::out_of_range& e) {
			std::cerr << "Îøèáêà: " << e.what() << std::endl;
		}


		cout << "Enter the MONTH of Death" << endl;
		cin >> monthDeath;
		try {
			if (monthDeath > 12 || monthDeath <= 0) {
				throw std::out_of_range("Enter the CORRECT MONTH of Death");
			}
		}
		catch (const std::out_of_range& e) {
			std::cerr << "Îøèáêà: " << e.what() << std::endl;
			cout << "Enter the CORRECT MONTH of Death" << endl;
			cin >> monthDeath;
		}


		cout << "Enter the YEAR of Death" << endl;
		cin >> yearDeath;
		fout << "Date of death: " << dayDeath << "." << monthDeath << "." << yearDeath << endl;
			try {
				if (yearDeath > 2023 || yearDeath <= 1900) {
					throw std::out_of_range("Enter the CORRECT YEAR of Death");
				}
			}
			catch (const std::out_of_range& e) {
				std::cerr << "Îøèáêà: " << e.what() << std::endl;
				cout << "Enter the CORRECT YEAR of Death" << endl;
				cin >> yearDeath;
			}

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
