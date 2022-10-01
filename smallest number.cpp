#include<iostream>
using namespace std;
int main()

{
    int x, y, z, r ;

    cout<<"Enter number 1: ";
    cin>>x;
    cout<<"Enter number 2: ";
    cin>>y;
    cout<<"Enter number 3: ";
    cin>>z;

    if( x<y && x<z )
        r=x;
    else if( y<x && y<z )
        r=y;
    else
        r=z;

    cout<<"The smallest number is: "<<r;

}
