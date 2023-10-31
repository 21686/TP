#include "Keeper.h"

// make user menu & check orders
// Bug connected with ancestors. Can not write down the full name
Keeper user;

int main()
{
    int t = 0;
    while (t != 7) {
        cout << "Choose options:" << endl;
        cout << "1. Add object" << endl;
        cout << "2. Delete object" << endl;
        cout << "3. Change object" << endl;
        cout << "4. Save in file" << endl;
        cout << "5. Show" << endl;
        cout << "6. Merge data" << endl;
        cout << "7. Exit" << endl;
        cin >> t;
        if (t == 1)
            user.getInfo();
        if (t == 2) {
            user.deleteLinesAfterString();
        }
        if (t == 3) {
            cout << "Enter the string you want to change" << endl;
            string targetString;
            cin.ignore();
            getline(cin, targetString);
            user.changeObject(targetString);
        }

        if (t == 4)
            user.Save();

        if (t == 5) {
            user.SHOW();
           
        }
        if (t == 6) {
            user.MergeData();
        }

    }
}



