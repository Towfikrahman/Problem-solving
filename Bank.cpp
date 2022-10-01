#include <iostream>
using namespace std;

class Account
{
    string accName;
    int accNo;
    int balance;
    string accType;

public:

    Account()
    {}
    Account(string n, int no, int b, string t)
    {
        accName=n;
        accNo=no;
        balance=b;
        accType=t;
    }
    ~Account()
    {}
    void setValue(string n, int no, int b, string t)
    {
        accName=n;
        accNo=no;
        balance=b;
        accType=t;
    }
    int getValue()
    {
        cout<<"Account Name: "<<accName<<endl
            <<"Account No: "<<accNo<<endl
            <<"Current Balance: "<<balance<<endl
            <<"Account Type: "<<accType<<endl<<endl;
    }
    void deposit(int amount)
    {
        balance+=amount;
    }
    void withdraw(int amount)
    {
        balance-=amount;
    }
    void transfer(int amount, Account &obj)
    {
        balance-=amount;
        obj.balance+=amount;
    }
    void ShowAccountDetails()
    {
        cout<<"Account Name: "<<accName<<endl
            <<"Account No: "<<accNo<<endl
            <<"Current Balance: "<<balance<<endl
            <<"Account Type: "<<accType<<endl<<endl;
    }

};

int main()
{
    Account a1("Karim", 101, 1000, "deposit");
    a1.deposit(100);
    a1.ShowAccountDetails();

    Account a2;
    a2.setValue("Rahim", 102, 2000, "withdraw");
    a2.withdraw(200);
    a2.getValue();

    Account a3("Abdullah", 103, 2500, "transfer");

    a3.transfer(50, a1);
    a3.ShowAccountDetails();
    a1.ShowAccountDetails();

    return 0;
}
