// C++ program to implement the ATM Management System.
#include <iostream>
# include <stdlib.h>
#include <string.h>
using namespace std;

class Bank {

        // Private variables used inside class 
    private:
    string name;
    int accnumber;
    char type[10];
    int amount = 0;
    int tot = 0;

        // Public variables
    public:
        // Function to set the person's data
        void setvalue()
        {
            cout << "Enter name\n";
            cin.ignore();

            // To use space in string
            getline(cin, name);

            cout << "Enter Account number\n";
            cin >> accnumber;
            cout << "Enter Account type\n";
            cin >> type;
            cout << "Enter Balance\n";
            cin >> tot; 
        }

        //
}