#include <iostream>
using namespace std;
class bank
{
private:
    double acno, blc;

public:
    void setaccdetails(double accountnum, double balance)
    {
        acno = accountnum;
        blc = balance;
    }
    void getdetails()
    {
        cout << "\n\t-----------account details--------------";
        cout << "\n\tyour account number is: " << acno;
        cout << "\n\tyour account balance is: " << blc;
    }

    void amount_withdraw(float withd)
    {
        cout << "\n\n\t-----------withdrawal details--------------";
        if (blc >= withd)
        {
            blc -= withd;
            cout << "\n\twithdrawal successful. new balance:" << blc;
        }
        else
        {
            cout << "\n\tnot sufficient balance.";
        }
    }
    void amount_deposit(float dst)
    {
        cout << "\n\n\t-----------deposit details--------------";
        if (dst > 0)
        {
            blc += dst;
            cout << "\n\tdeposited successfully. new balance:" << blc;
        }
        else
        {
            cout << "\n\t enter the positive number";
        }
    }
};
int main()
{

    double accountnum, balance;
    float withdraw, deposit;
    int choose;
    char transaction;

    cout << "\n\tenter your account number: ";
    cin >> accountnum;
    cout << "\n\tenter your balance: ";
    cin >> balance;

    bank b;
    b.setaccdetails(accountnum, balance);
    b.getdetails();

    do
    {
        cout << "\n\n\t-----------transaction section--------------";
        cout << "\n\n\tpress 1 for withdraw and press 2 for deposit ";
        cin >> choose;

        if (choose == 1)
        {
            cout << "\n\tenter the withdrawal amount: ";
            cin >> withdraw;
            b.amount_withdraw(withdraw);
        }
        else if (choose == 2)
        {

            cout << "\n\tenter the withdrawal amount: ";
            cin >> deposit;
            b.amount_deposit(deposit);
        }
        else
        {
            cout << "enter the valid operation digit...";
        }

        cout << "\n\tdo you want to continue the another transaction: ";
        cin >> transaction;

    } while (transaction == 'y');
    cout << "\n\tthank you for using the banking system!...";
}