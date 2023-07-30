#include<iostream>
using namespace std;

int main()
{
    int size, i, j, k, l;
    cin>>size;

    // upper half
    for( i = 1; i <= size; i++ )
    {
        // left side part
        for( j = size - i; j > 0; j-- )
        {
            cout<<" ";
        }
        for( k = 1; k <= i; k++ )
        {
            cout<<k;
        }
        // right side part
        for( l = 1; l < i; l++ )
        {
            cout<<l+i;
        }
        cout<<endl;
    }

    // lower half
    for( i = 1; i <= size; i++ )
    {
        // left side part
        for( k = 1; k <= i; k++ )
        {
            cout<<" ";
        }
        for( j = 1; j <= size - i; j++ )
        {
            cout<<j;
        }
        // right side part
        for( l = 0; l < size - i - 1; l++ )
        {
            cout<<l+j;
        }
        cout<<endl;
    }









    // upper half
    for( i = 1; i <= size; i++ )
    {
        // left side part
        for( j = size - i; j > 0; j-- )
        {
            cout<<" ";
        }
        for( k = 1; k <= i; k++ )
        {
            cout<<k;
        }
        // right side part
        for( l = i-1; l >= 1; l-- )
        {
            cout<<l;
        }
        cout<<endl;
    }

    // lower half
    for( i = 1; i <= size; i++ )
    {
        // left side part
        for( k = 1; k <= i; k++ )
        {
            cout<<" ";
        }
        for( j = 1; j <= size - i; j++ )
        {
            cout<<j;
        }
        // right side part
        for( l = size - i - 1; l >= 1; l-- )
        {
            cout<<l;
        }
        cout<<endl;
    }
}

