#include<iostream>
using namespace std;
int main()
{
    int size, even = 0, odd = 0;
    cin>>size;
    int arr[size];

    for( int i = 0; i < size; i++ )
    {
        cin>>arr[i];
        arr[i] = arr[i] % 2;
        if( arr[i] == 0 )
            even ++;
        else
            odd ++;
    }
    cout<<odd<<" odd numbers"<<endl;
    cout<<even<<" even numbers"<<endl;


}
