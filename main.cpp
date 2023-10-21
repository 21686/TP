#include "Keeper.h"

// make user menu & check orders
// Bug connected with ancestors. Can not write down the full name
Keeper user1;

int main()
{
    int t = -1;
    while (t != 6) {
        cout << "Choose options:" << endl;
        cout << "0. Add a part of object" << endl;
        cout << "1. Add object" << endl;
        cout << "2. Delete object" << endl;
        cout << "3. Change object" << endl;
        cout << "4. Save in file" << endl;
        cout << "5. Show from file" << endl;
        cout << "6. Exit" << endl;
        cin >> t;
        if (t == 1)
            user1.GetInfo();
        if (t == 2) {
            std::string filename = "FamilyTree.txt";
            cout << "Enter the string you want to delete" << endl;
            std::string targetString;
            cin.ignore();
            getline(cin, targetString);
            user1.deleteLinesAfterString(targetString);
        }

        if (t == 3) {
            cout << "Enter the string you want to change" << endl;
            string targetString;
            cin.ignore();
            getline(cin, targetString);
            user1.changeObject(targetString);
        }

        if (t == 4)
            cout << "Saving realized automatically" << endl;

        if (t == 5) 
            user1.showFile();
        if (t == 0) {
            cout << "Enter the string you want to ADD" << endl;
            string targetString;
            cin.ignore();
            getline(cin, targetString);
            user1.addPart(targetString);
        }
    }
}



