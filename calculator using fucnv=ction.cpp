#include <iostream>
using namespace std;

int addition(int a, int b)
{
    int sum=a+b;
    return sum;
}
int main()
{
    int x,y;
    cout<<"Enter two numbers: ";
    cin>>x>>y;
    int sum=addition(x,y);      //calling function
    cout<<"Sum is = "<<sum ;

    return 0;
}
