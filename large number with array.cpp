#include<iostream>
using namespace std;
int main()
{
    int n, i, max;
    cout<<"Enter lines number: ";
    cin>>n;
    int array[n];

    for( i = 0; i < n; i++ )
    {
        cout<<"Enter elements "<<i + 1<<" = ";
        cin>>array[i];
    }
    max == array[0];

    for( i = 0; i < n; i++ )
    {
        if ( max < array[i] )
        {
            max = array[i];
        }
    }
    cout<<"large number is: "<< max;

    return 0;
}
