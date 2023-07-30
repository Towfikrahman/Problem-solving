#include<iostream>
using namespace std;
int main()
{
    int size = 6;
    int arr[size] = { 5, 2, 3, 3, 4, 1 };

    for( int i = 0; i < size; i++ )
    {
        for( int j = i+1; j < size; j++ )
        {
            if( arr[i] == arr[j] )
            {
                for( int k = j; k < size; k++ )
                {
                    arr[k] = arr[k+1];
                }
                size--;
            }
        }
    }

    for( int i = 0; i < size; i++ )
    {
        cout<<arr[i]<<" ";
    }


}
