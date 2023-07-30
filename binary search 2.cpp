#include<iostream>
using namespace std;

void binary_search( int arr[], int size )
{
    int low = 0, high = size, find;
    cout<<"Enter find number: ";
    cin>>find;

    while( low <= high )
    {
        int mid = ( low + high ) / 2;

        if( arr[mid] == find )
        {
            cout<<"find index is: "<<mid<<endl;
            break;
        }
        else if( arr[mid] < find )
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
}



int main()
{
    int size;
    cin>>size;

    int arr[size];

    for( int i = 0; i < size; i++ )
    {
        cin>>arr[i];
    }

    binary_search( arr, size );


    return 0;
}
