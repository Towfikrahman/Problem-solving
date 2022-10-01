#include<iostream>
using namespace std;
int main()
{
    int n, r , sum=0 ;
    cout<<"enter any number: ";
    cin>>n;

    for( r = 1; r <= n; r++ )
        {
        if( r % 2 == 0 )
            sum = sum + r;
        }
        cout<<"sum of even numbers: "<<sum<<endl;

return 0 ;
}
