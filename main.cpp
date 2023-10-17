#include "Keeper.h"

// make user menu & check orders
// Bug connected with ancestors. Can not write down the full name
Keeper user1;

int main()
{
    int t = -1;
    while (t != 0) {
        cout << "Choose options:" << endl;
        cout << "1. Add object" << endl;
        cout << "2. Delete object" << endl;
        cout << "3. Change object" << endl;
        cout << "4. Save in file" << endl;
        cout << "5. Show from file" << endl;
        cout << "0. Exit" << endl;
        cin >> t;
        if (t == 1)
            user1.GetInfo();
        if (t == 2) {
            user1.deleteInfo();
        }
        if (t == 3) {
            user1.deleteInfo();
        }
        if (t == 4)
            cout << "Saving realized automatically" << endl;
        if (t == 5) {

        }
    }
}



