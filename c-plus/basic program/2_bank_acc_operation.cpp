#include <iostream>
#include <string>
using namespace std;

class bankaccount
{
    string name;
    int accnum;
    string actype;
    int blc;

public:
    void assignvalues(string depositernm, int accountnum, string acctype, int balance)
    {
        name = depositernm;
        accnum = accountnum;
        actype = acctype;
        blc = balance;
    }
    void deposit(int amount)
    {
        if (amount > 0)
        {
            blc += amount;
            cout << "\n\tdeposited successfully. new balance: " << blc << endl;
        }
        else
        {
            cout << "\n\tinvalid deposit account" << endl;
        }
    }
    void withdraw(int amount)
    {

        if (amount > blc)
        {
            cout << "\n\tInsufficient balance. Available balance: " << blc << endl;
        }
        else if (amount > 0)
        {
            blc -= amount;
            cout << "\n\tAmount withdrawn successfully. New balance: " << blc << endl;
        }
        else
        {
            cout << "\n\tInvalid withdrawal amount." << endl;
        }
    }
    void displayAccountDetails() const
    {
        cout << "\n\tDepositor Name: " << name << endl;
        cout << "\n\tBalance: " << blc << endl;
    }
};
int main()
{

    string depositernm;
    int accountnum;
    string acctype;
    int balance;
    int deposit, withdraw, choice;
    bankaccount acc;

    cout << "\n\tenter your name: ";
    cin >> depositernm;
    cout << "\n\tenter your account number: ";
    cin >> accountnum;
    cout << "\n\tenter your account type: ";
    cin >> acctype;
    cout << "\n\tenter your balance: ";
    cin >> balance;

     acc.assignvalues(depositernm, accountnum, acctype, balance);
     acc.displayAccountDetails();

    cout << "\n\tpress 1 for deposit values and 2 for withdraw values";

    cout << "\n\tenter your choice: ";
    cin >> choice;

    if (choice == 1)
    {
        cout << "\n\tenter your deposit value: ";
        cin >> deposit;
        acc.deposit(deposit);
    }
    else if (choice == 2)
    {

        cout << "\n\tenter your withdraw value: ";
        cin >> withdraw;

        acc.withdraw(withdraw);
    }
    else
    {
        cout << "\n\tchoose the valid operation";
    }

    
}