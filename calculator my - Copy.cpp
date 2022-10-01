#include<iostream>
using namespace std;
int main()
{
    float n1, n2, r ;
    char sn ;

        cout<<"Enter the number1: " ;
        cin>>n1;
        cout<<"Enter the operator: ";
        cin>>sn;
        cout<<"Enter the number2: " ;
        cin>>n2;

        switch(sn)
        {
            case('+'):
                r=n2+n1;
                    break;



            case('-'):
                r=n2-n1;

                    break;


            case('/'):
                r=n2/n1;
                    break;



            case('*'):
                r=n2*n1;
                    break;




            default:
                cout<< "Invalid operator";
        }
                cout<<"The result is: "<<r<<endl;


        return 0;

}
