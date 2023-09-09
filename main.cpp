#include "Keeper.h"

// make user menu & check orders
Keeper user1;

int main()
{
    int t = -1;
    while (t != 0) {
        cout << "Choose options:" << endl;
        cout << "1. Add object" << endl;
        cout << "2. Delete object" << endl;
        cout << "3. Save in file" << endl;
        cout << "4. Show from file" << endl;
        cout << "0. Exit" << endl;
        cin >> t;
        if (t == 1)
            user1.GetInfo();
        if (t == 2) {

        }
         if (t == 3)
                cout << "Saving realized automatically" << endl;
        if (t == 4) {

        }
    }
}



