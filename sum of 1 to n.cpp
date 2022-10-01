#include<iostream>
using namespace std;
int main()
{
    int n, i, sum ;
    cout<<"enter the number: ";
    cin>>n ;
    sum=0 ;

    for ( i = 1; i <= n; i++ )
        {
         sum = sum + i;
        }
        cout<<"the result is: "<<sum;

return 0;

}
