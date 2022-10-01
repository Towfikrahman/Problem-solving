#include<iostream>
using namespace std;
int main()
{
    float num1, num2, r;
    int choice;
    do
    {
        cout<<"1. Addition"<<endl;
        cout<<"2. Subtraction"<<endl;
        cout<<"3. Multiplication"<<endl;
        cout<<"4. Division"<<endl;
        cout<<"5. Exit"<<endl;
        cout<<"Enter Your Choice(1-5): ";
        cin>>choice;

        if(choice>=1 && choice<=4)
        {
            cout<<"Enter Numbers 1: ";
            cin>>num1;
            cout<<"Enter Numbers 2: ";
            cin>>num2;
        }
        switch(choice)
        {
            case 1:
                r = num1+num2;
                cout<<"\nResult = "<<r;
                break;
            case 2:
                r = num1-num2;
                cout<<"\nResult = "<<r;
                break;
            case 3:
                r = num1*num2;
                cout<<"\nResult = "<<r;
                break;
            case 4:
                r = num1/num2;
                cout<<"\nResult = "<<r;
                break;

            default:
                cout<<"Wrong Choice!"<<endl;
                break;
        }
        cout<<"\n------------------------\n";
    }while(choice!=5);

    return 0;
}

