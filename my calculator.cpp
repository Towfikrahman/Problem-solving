#include<iostream>
using namespace std;
int main()
{
    float x, y, r;
    char op;
    cout<<"Enter the first number: ";
    cin>>x;
    cout<<"Enter the operator: ";
    cin>>op;
    cout<<"Enter the second number: ";
    cin>>y;
{


    if (op== '+')
        r=x+y;


        else if (op=='-')
            r=x-y;


        else if( op=='/' )
           r=x/y;


        else if( op=='*')
            r=x*y;


    else
            cout<<"Invalid result";

}
        cout<<"result is: "<<r<<endl;


return 0;


}
