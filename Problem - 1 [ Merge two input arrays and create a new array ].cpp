#include <iostream>
using namespace std;

void printArrayReverse( int* arr, int size )
{
    for( int i = size - 1; i >= 0; i-- )
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int size1, size2;
    cout<<"Enter the size of the first array: ";
    cin>>size1;
    int array1[ size1 ];

    cout<<"Enter elements of the first array: ";
    for( int i = 0; i < size1; i++ )
    {
        cin>>array1[i];
    }

    cout<<"Enter the size of the second array: ";
    cin>>size2;
    int array2[ size2 ];

    cout<<"Enter elements of the second array: ";
    for( int i = 0; i < size2; i++ )
    {
        cin>>array2[i];
    }

    int newSize = size1 + size2;
    int newArray[ newSize ];

    // Merge array index for newArray
    int newIndex = 0;

    for( int i = 0; i < size1; i++ )
    {
        newArray[ newIndex ] = array1[i];
        newIndex++;
    }

    for( int i = 0; i < size2; i++ )
    {
        newArray[ newIndex ] = array2[i];
        newIndex++;
    }

    printArrayReverse( newArray, newSize );

}
