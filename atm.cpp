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
    int total = 0;

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
            cin >> total; 
        }

        // Function to display the required data
        void showdata()
        {
            cout << "Name: " << name << endl;
            cout << "Account No: " << accnumber << endl;
            cout << "Account type: " << type << endl;
            cout << "Balance: " << total << endl;
        }

        // Function to deposit the amount in ATM 
        void deposit(){
            cout << "\nEnter amount to be Deposited\n";
            cin >> amount;
        }

        // Function to show the balance amount
        void showbalance()
        {
            total = total + amount;
            cout << "\nTotal balance is: " << total;
        }

        // Function to withdraw the amount from ATM
        void withdraw()
        {
            int a, avai_balance;
            cout << "Enter amount to withdraw\n";
            cin >> a;
            avai_balance = total - a;
            cout << "Available Balance is: " << avai_balance;
        }
    };