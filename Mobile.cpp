#include<iostream>
using namespace std;
class Mobile
{
    string ownerName;
    string mobileNumber;
    string os_Name;
    int balance;
    bool lockedStatus;


public:
    Mobile() {}
    Mobile( string n, string mn, int b, string o, bool l )
    {
        ownerName=n;
        mobileNumber=mn;
        balance=b;
        os_Name=o;
        lockedStatus=l;
    }
    ~Mobile()
    {}

    void setOwnerName(string n)
        {
        ownerName=n;
        }
    void setMobileNumber(string mn)
        {
        mobileNumber=mn;
        }
    void setBalance(int b)
        {
        balance=b;
        }
    void setOsName(string o)
        {
        os_Name=o;
        }
    void setLockedStatus(bool l)
        {
        lockedStatus=l;
        }

    string getOwnerName()
        {
        return ownerName;
        }
    string getMobileNo()
        {
        return mobileNumber;
        }
    int getBalance()
        {
        return balance;
        }
    string getOsName()
        {
        return os_Name;
        }

    bool getLockedStatus()
        {
        return lockedStatus;
        }
    void recharge(int n)
        {
        if(lockedStatus==1)
            {
            cout<<"The phone is locked."<<endl;
            }

        else
            {
            if(balance<0)
                {
                cout<<"Balance cannot  be negative."<<endl;
                }
            else
                balance+=n;
            cout<<"Recharge "<<n<<" Taka is successful.New balance TK "<<balance<<endl;
            }

        }

    void callSomeone(float x)
        {
        if(lockedStatus==1)
            cout<<"The phone is locked."<<endl;
        else
            {
            if(balance<=0)
                {
                cout<<"You don't have sufficient balance. Please recharge."<<endl;
                }
            else
                {
                float cost= x*0.5;
                balance-=cost;
                cout<<"Call duration "<<x<<" minutes. "<<cost<<" taka is deducted from your account  Balance: "<<balance<<" tk."<<endl;
                }
            }
        cout<<endl;
        }
    void showInfo()
        {
        if(lockedStatus==1)
            {
            cout<<"The phone is locked ."<<endl;
            cout<<endl;

            }
        else
            {
            cout<<"Mobile Owner Name:"<<ownerName<<endl;
            cout<<"Mobile Number: "<<mobileNumber<<endl;
            cout<<"Mobile Balance: "<<balance<<endl;
            cout<<"Mobile Os name: "<<os_Name<<endl;
            cout<<"Locked Status: "<< lockedStatus<<endl;
            cout<<endl;
            }
        }
};

int main()
{
    Mobile m1("Zim","01722222222",20,"Android",false);
    m1.showInfo();

    Mobile m2("Towfik","01711111111",10,"IOS",true);
    m2.recharge(40);
    m2.callSomeone(20);
    m2.showInfo();

    m1.recharge(200);
    m1.callSomeone(30);
    m1.showInfo();
    m2.callSomeone(10);

    Mobile m3;
    m3.setOwnerName("Shumon");
    m3.setMobileNumber("01700000000");
    m3.setBalance(500);
    m3.setOsName("IOS");
    m3.setLockedStatus(false);
    m3.showInfo();

    return 0;
}
