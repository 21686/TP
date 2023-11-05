#include "Keeper.h"

FamilyTree user;
Keeper keep;



int Keeper::changeSize(int cnt) {
	size = cnt;
	return size;
}

void Keeper::resize() {
    int newCapacity = size+1;
    FamilyTree* newArray = new FamilyTree[newCapacity];
    for (int i = 0; i < size; ++i) {
        newArray[i] = familyArray[i];
    }
    delete[] familyArray;
    familyArray = newArray;
    capacity = newCapacity;
}


void Keeper::resizeMerge() {
    int newCapacity = size;
    FamilyTree* newArray = new FamilyTree[newCapacity];
   
    delete[] familyArray;
    familyArray = newArray;
    capacity = newCapacity;
}



void Keeper::shrink() {
    int newCapacity = (capacity == 0) ? 0 : capacity--;

    if (newCapacity < 1)
        newCapacity = 1;  // Предотвращение уменьшения емкости до 0 или ниже.

    FamilyTree* newArray = new FamilyTree[newCapacity];

    for (int i = 0; i < newCapacity; ++i) {
        newArray[i] = familyArray[i];
    }

    delete[] familyArray;
    familyArray = newArray;
    capacity = newCapacity;
}

void Keeper::getInfo()
{
    keep.resize();
    //FamilyTree person("John", "Doe");
    user.GetINfo();
    user.GetDate();
    user.GetStatus();
    user.GetChildrenInfo();

    cout << "Enter the FULL NAME of male parent" << endl;
    cin.clear();
    cin.ignore();
    string k;
    getline(cin, k, '\n');
    user.ancestorMale = k;
    cout << "Enter the FULL NAME of female parent" << endl;
    cin.clear();
    cin.ignore();
    getline(cin, k, '\n');
    user.ancestorFemale = k;

    if (keep.size < keep.capacity) {
        keep.familyArray[keep.size] = user;
        keep.capacity++;
        // keep(keep.capacity);
        keep.size++;

    }
    else {
        cerr << "Контейнер переполнен." << endl;
    }


}



void Keeper::deleteLinesAfterString()
{

    cout << "Enter the number of object you want to delete" << endl;
    int k;
    cin >> k;
    for (int i = 0; i < keep.size; i++) {
        if (i == k) {
            continue;
        }
        for (int j = i; j < keep.size - 1; j++) {
            keep.familyArray[j] = keep.familyArray[j + 1];
        }

    }
    keep.size--;
    keep.shrink();
    cout << "Operation finished" << endl;

}



void Keeper::SHOW() {

    string out;

    for (int i = 0; i < keep.size; i++) {// CHANGE SIZEEEEEEEEEEEEEE
        cout << "---------------------------------------------------------" << endl;
        cout << "Name: " << keep.familyArray[i].name << endl;
        cout << "Surname: " << keep.familyArray[i].surname << endl;
        cout << "SecondName: " << keep.familyArray[i].secondName << endl;
        cout << "Date of birth: " << keep.familyArray[i].dayBirth << "." << keep.familyArray[i].monthBirth << "." << keep.familyArray[i].yearBirth << endl;
        cout << "Date of death: " << keep.familyArray[i].dayDeath << "." << keep.familyArray[i].monthDeath << "." << keep.familyArray[i].yearDeath << endl;
        cout << "Age: " << keep.familyArray[i].Age << endl;
        cout << "Partner: " << keep.familyArray[i].partner << endl;
        cout << "Children number: " << keep.familyArray[i].childrenNumber << endl;//<< "Children: "
        if (keep.familyArray[i].childrenNumber != 0) {
            for (int j = 0; j < keep.familyArray[i].childrenNumber; j++)
            {
                cout << keep.familyArray[i].children[j] << endl;
            }
        }
        else {
            cout << "---" << endl;
        }
        cout << "Father: " << keep.familyArray[i].ancestorMale << endl;
        cout << "Mother: " << keep.familyArray[i].ancestorFemale << endl;
    }
}



void Keeper::changeObject(string targetString) {

    string line, newLine;
   streampos lastLinePos = 0;

    cout << "How you want to change it?" << endl;

    getline(cin, newLine);
    cout << "Write a number of person whose data you want to change" << endl;
    int num;
    cin >> num;

    for (int i = 0; i < keep.size; i++) {
        if (i == num) {
            cout << "What do u want to change?" << endl;
            string k;
            cin.ignore(); // Очистка буфера ввода перед чтением строки
            getline(cin, k);
            if (k == "Name")
                keep.familyArray[i].name = newLine;
            if (k == "Surame")
                keep.familyArray[i].surname = newLine;
            if (k == "Second name")
                keep.familyArray[i].secondName = newLine;
            if (k == "Date of birth") {
                keep.familyArray[i].GetDate();
            }
            if (k == "Date of death") {
                keep.familyArray[i].GetDate();
            }
            if (k == "Age")
                keep.familyArray[i].Age = stoi(newLine);// convert to int
            if (k == "Partner")
                keep.familyArray[i].partner = newLine;
            if (k == "Father")
                keep.familyArray[i].ancestorMale = newLine;
            if (k == "Mother")
                keep.familyArray[i].ancestorFemale = newLine;
            break;
        }
    }

    std::cout << "Operation finished" << endl;
}



void Keeper::MergeData() {

    ifstream file("FamilyTree.txt");
    if (!file) {
        cerr << "Не удается открыть файл " << "FamilyTree.txt" << endl;
        return;
    }

    string line;
    int cnt = 0;
    string l;
    fstream f("4Size.txt", std::ios::in | std::ios::out);
    getline(f, l);
    cnt = stoi(l);
    keep.changeSize(cnt);
    size = cnt;
    keep.resizeMerge();
    for (int i = 0; i < keep.size; i++) {
        getline(file, line);
        keep.familyArray[i].name = line;

        getline(file, line);
        keep.familyArray[i].surname = line;

        getline(file, line);
        keep.familyArray[i].secondName = line;

        getline(file, line);
        keep.familyArray[i].dayBirth = stoi(line);

        getline(file, line);
        keep.familyArray[i].monthBirth = stoi(line);

        getline(file, line);
        keep.familyArray[i].yearBirth = stoi(line);

        getline(file, line);
        keep.familyArray[i].dayDeath = stoi(line);

        getline(file, line);
        keep.familyArray[i].monthDeath = stoi(line);

        getline(file, line);
        keep.familyArray[i].yearDeath = stoi(line);

        getline(file, line);
        // if (yearDeath == 0 && dayDeath == 0 && monthDeath == 0) {
           //  cout << "alive" << endl;
        // }
        keep.familyArray[i].Age = stoi(line);

        getline(file, line);
        keep.familyArray[i].partner = line;

        getline(file, line);
        keep.familyArray[i].childrenNumber = stoi(line);
        if (keep.familyArray[i].childrenNumber != 0) {
            for (int j = 0; j < keep.familyArray[i].childrenNumber; j++)
            {
                getline(file, line);
                keep.familyArray[i].children[j] = line;
            }
        }
        else {
            getline(file, line);
            if (line == "---") {
                cout << "correct" << endl;

            }
            else {
                cout << "ERROR" << endl;
            }

        }

        getline(file, line);
        keep.familyArray[i].ancestorMale = line;
        getline(file, line);
        keep.familyArray[i].ancestorFemale = line;
        getline(file, line);
        if (line == "END") {
            cout << "Success!" << endl;
          
        }
        else {
            cout << "ERROR" << endl;
        }
    }
    cout << "Operation finished" << endl;

    file.close();
}



void Keeper::Save() {
    ofstream file("FamilyTree.txt");

    if (!file.is_open()) {
        std::cerr << "Error";
        return;
    }
    for (int i = 0; i < keep.size; i++) {
        file << keep.familyArray[i].name << endl;// name
        file << keep.familyArray[i].surname << endl;//<< "Surname: "
        file << keep.familyArray[i].secondName << endl;// << "SecondName: "
        file << keep.familyArray[i].dayBirth << endl << keep.familyArray[i].monthBirth << endl << keep.familyArray[i].yearBirth << endl;//<< "Date of birth: "
        file << keep.familyArray[i].dayDeath << endl << keep.familyArray[i].monthDeath << endl << keep.familyArray[i].yearDeath << endl; //<< "Date of death: "
        file << keep.familyArray[i].Age << endl;// << "Age: "
        file << keep.familyArray[i].partner << endl;//<< "Partner: "
        file << keep.familyArray[i].childrenNumber << endl;//<< "Children: "
        if (keep.familyArray[i].childrenNumber != 0) {
            for (int j = 0; j < keep.familyArray[i].childrenNumber; j++)
            {
                file << keep.familyArray[i].children[j] << endl;
            }
        }
        else {
            file << "---" << endl;
        }
        file << keep.familyArray[i].ancestorMale << endl;
        file << keep.familyArray[i].ancestorFemale << endl;
        file << "END" << endl;
    }
    cout << "Success!" << endl;
    fstream f("4Size.txt", ios::out);
    f << keep.size << endl;
    f.close();
    file.close();
}




