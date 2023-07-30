#include <iostream>
using namespace std;

int* isDuplicate( int* array, int size )
{
    for( int i = 0; i < size; i++ )
    {
        for( int j = 1; j < size; j++ )
        {
            if( array[i] > array[j] )
            {
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
    return array;


}


int main()
{
    int size = 10;
    int arr[size] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };

    int* checked = isDuplicate( arr, size );
    for( int i = 0; i < size; i++ )
    {
        cout<<checked[i]<<" ";
    }
}


/*
int main()
{
    int sizeA, sizeB;
    bool found = true;

    cout << "Enter the size of array A: ";
    cin >> sizeA;

    int Arr[sizeA];
    cout << "Enter elements of array A: ";
    for (int i = 0; i < sizeA; i++)
    {
        cin >> Arr[i];
    }

    cout << "Enter the size of array B: ";
    cin >> sizeB;

    int Brr[sizeB];
    cout << "Enter elements of array B: ";
    for (int i = 0; i < sizeB; i++)
    {
        cin >> Brr[i];
    }

    cout << "Common element(s): ";
    for (int i = 0; i < sizeA; i++)
    {
        bool isDuplicate = false;

        for (int j = 0; j < i; j++)
        {
            if (Arr[i] == Arr[j])
            {
                isDuplicate = true;
                break;
            }
        }

        if (isDuplicate)
        {
            continue;
        }
        else
        {
           for (int j = 0; j < sizeB; j++)
            {
                if (Arr[i] == Brr[j])
                {
                    cout << Arr[i] << " ";
                    found = false;
                }
            }
        }
    }

    if( found )
        cout<<"No common element!"<<endl;

    return 0;
}
*/














/*
#include <iostream>
using namespace std;

int check(int num, int* array, int size)
{
    for (int i = 0; i < size; i++)
    {
        if (num != array[i])
        {
            return 1;
        }
    }
    return 0;
}


int main()
{
    int sizeA, sizeB;

    cout << "Enter the size of array A: ";
    cin >> sizeA;

    int Arr[sizeA];
    cout << "Enter elements of array A: ";
    for (int i = 0; i < sizeA; i++)
    {
        cin >> Arr[i];
    }

    cout << "Enter the size of array B: ";
    cin >> sizeB;

    int Brr[sizeB];
    cout << "Enter elements of array B: ";
    for (int i = 0; i < sizeB; i++)
    {
        cin >> Brr[i];
    }

    int common[sizeA + sizeB];
    int commonSize = 0;
    bool found = false;

    for (int i = 0; i < sizeA; i++)
    {
        for (int j = 0; j < sizeB; j++)
        {
            if (Arr[i] == Brr[j])
            {
                int checked = check(Arr[i], common, commonSize);

                if (checked == 1)
                {
                    common[commonSize] = Arr[i];
                    commonSize++;
                    found = true;
                }
            }
        }
    }

    if (found)
    {
        cout << "Common element(s): ";
        for (int i = 0; i < commonSize; i++)
        {
            cout << common[i] << " ";
        }
    }
    else
    {
        cout << "No common element!";
    }

    return 0;
}
*/
