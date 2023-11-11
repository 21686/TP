#include "FamilyTree.h"

ofstream fout("FamilyTree.txt", ios::app);

FamilyTree& FamilyTree::operator=(const FamilyTree& other) {
    if (this == &other) {
        return *this;
    }
    name = other.name;
    surname = other.surname;
    secondName = other.secondName;
    dayBirth = other.dayBirth;
    monthBirth = other.monthBirth;
    yearBirth = other.yearBirth;
    Age = other.Age;
    dayDeath = other.dayDeath;
    monthDeath = other.monthDeath;
    yearDeath = other.yearDeath;
    partner = other.partner;
    childrenNumber = other.childrenNumber;
    if (other.childrenNumber != 0) {
        for (int j = 0; j < other.childrenNumber; j++)
        {
            children[j] = other.children[j];
        }
    }
    ancestorMale = other.ancestorMale;
    ancestorFemale = other.ancestorFemale;
    cout << "Copy constructor called" << endl;
    return *this;
}


void FamilyTree::GetDate() {
    cout << "Enter the DAY of Birth" << endl;
    cin >> dayBirth;
    try {
        if (dayBirth > 31 || dayBirth <= 0) {
            throw out_of_range("Enter the CORRECT DAY of Birth");
        }
    }
    catch (const out_of_range& e) {
        cerr << "Error: " << e.what() << endl;
        
        cin >> dayBirth;
    }

    cout << "Enter the MONTH of Birth" << endl;
    cin >> monthBirth;
    try {
        if (monthBirth > 12 || monthBirth <= 0) {
            throw out_of_range("Enter the CORRECT MONTH of Birth");
        }
    }
    catch (const out_of_range& e) {
        cerr << "Îøèáêà: " << e.what() << endl;
        
        cin >> monthBirth;
    }


    cout << "Enter the YEAR of Birth" << endl;
    cin >> yearBirth;
    try {
        if (yearBirth > 2023 || yearBirth <= 1900) {
            throw out_of_range("Enter the CORRECT YEAR of Birth");
        }
    }
    catch (const out_of_range& e) {
        cerr << "Îøèáêà: " << e.what() << endl;
      
        cin >> yearBirth;
    }

    fout << dayBirth << endl << monthBirth << endl << yearBirth << endl;

    cout << "Enter the AGE" << endl;
    cin >> Age;
    fout << Age << endl;

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
                throw out_of_range("Enter the CORRECT DAY of Death");
            }
        }
        catch (const out_of_range& e) {
            cerr << "Îøèáêà: " << e.what() << endl;
            cin >> dayDeath;
        }


        cout << "Enter the MONTH of Death" << endl;
        cin >> monthDeath;
        try {
            if (monthDeath > 12 || monthDeath <= 0) {
                throw out_of_range("Enter the CORRECT MONTH of Death");
            }
        }
        catch (const out_of_range& e) {
            cerr << "Îøèáêà: " << e.what() << endl;
  
            cin >> monthDeath;
        }


        cout << "Enter the YEAR of Death" << endl;
        cin >> yearDeath;

        try {
            if (yearDeath > 2023 || yearDeath <= 1900) {
                throw std::out_of_range("Enter the CORRECT YEAR of Death");
            }
        }
        catch (const std::out_of_range& e) {
            std::cerr << "Îøèáêà: " << e.what() << std::endl;
       
            cin >> yearDeath;
        }
        fout << dayDeath << endl << monthDeath << endl << yearDeath << endl;
    }
    else {
        fout << "1" << endl;
    }

}

void FamilyTree::GetINfo() {

    cout << "Enter the NAME" << endl;
    cin >> name;
    fout << name << endl;

    cout << "Enter the SURNAME" << endl;
    cin >> surname;
    fout << surname << endl;

    cout << "Enter the SECOND NAME" << endl;
    cin >> secondName;
    fout << secondName << endl;
}

void FamilyTree::GetStatus() {
    cout << "Does the person married?" << endl;
    cout << "1.Yes" << endl;
    cout << "2.No" << endl;
    int k;
    cin >> k;
    if (k == 1) {// if married
        cout << "Enter the FULL NAME of partner" << endl;
        cin.clear();
        cin.ignore();
        getline(cin, partner, '\n');
        fout << partner << endl;
    }
    else {
        partner = "none";
    }
}

void FamilyTree::GetChildrenInfo() {
    cout << "Enter the NUMBER of children" << endl;
    cin >> childrenNumber;
    string childName;

    if (childrenNumber != 0) {

        for (int i = 0; i < childrenNumber; i++) {
            cout << "Enter the Name of child" << endl;
            cin >> childName;
            children[i] = childName;
            k++;
        }
    }

    fout.close();
}




