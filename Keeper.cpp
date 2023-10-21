#include "Keeper.h"

void Keeper::GetInfo()
{
	GetINfo();
	GetDate();
	GetStatus();
	GetChildrenInfo();
	ofstream fout("FamilyTree.txt", ios::app);
	std::cout << "Enter the FULL NAME of male parent" << endl;
	cin >> ancestorMale;
	fout << "Father: " << ancestorMale << endl;
	std::cout << "Enter the FULL NAME of female parent" << endl;
	cin >> ancestorFemale;
	fout << "Mother: " << ancestorFemale << endl;
	fout << endl;
	fout.close();
}

void Keeper::deleteLinesAfterString(string targetString)
{
    std::fstream file("FamilyTree.txt", std::ios::in | std::ios::out);

    if (!file.is_open()) {
        std::cerr << "Error";
        return;
    }

    std::string line, newLine;
    std::streampos lastLinePos = 0;

    newLine = "";

    while (std::getline(file, line)) {

       
        if (line == targetString) {
            file.seekp(lastLinePos); // Перемещаем указатель записи на место найденной строки
            file << newLine; // Заменяем строку новой строкой
            break;
        }
        lastLinePos = file.tellg();
    }

    file.close();
    std::cout << "Operation finished" << endl;

}

void Keeper::showFile() {
    ifstream fout("FamilyTree.txt", ios::app);
    string out;
    while (getline(fout, out)) {
       
        cout << out << endl;
    }
    fout.close();
}

void Keeper::changeObject(string targetString) {
    std::fstream file("FamilyTree.txt", std::ios::in | std::ios::out);

    if (!file.is_open()) {
        std::cerr << "Error";
        return;
    }

    std::string line, newLine;
    std::streampos lastLinePos = 0;

    cout << "How you want to change it?" << endl;
    cin.ignore(); // Очистка буфера ввода перед чтением строки
    std::getline(cin, newLine);

    while (std::getline(file, line)) {
       

        if (line == targetString) {
            file.seekp(lastLinePos); // Перемещаем указатель записи на место найденной строки
            file << newLine; // Заменяем строку новой строкой
            break;
        }
        lastLinePos = file.tellg();
    }

    file.close();
    std::cout << "Operation finished" << endl;
}

void Keeper::addPart(string targetString) {
    std::fstream file("FamilyTree.txt", std::ios::in | std::ios::out);

    if (!file.is_open()) {
        std::cerr << "Error";
        return;
    }

    std::string line, newLine;
    std::streampos lastLinePos = 0;

    cout << "How you want to ADD?" << endl;
    cin.ignore(); // Очистка буфера ввода перед чтением строки
    std::getline(cin, newLine);

    while (std::getline(file, line)) {
        lastLinePos = file.tellg();

        if (line == targetString) {
            file.seekp(lastLinePos); // Перемещаем указатель записи на место найденной строки
            file << newLine; // Заменяем строку новой строкой
            break;
        }

    }

    file.close();
    std::cout << "Operation finished" << endl;
}
