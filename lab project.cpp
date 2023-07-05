#include<iostream>
using namespace std;

bool exite = true;


void selectionsort( float arr[], int n )
{
    for( int i=0; i<n-1; i++ )
    {
        for( int j=i+1; j<n; j++ )
        {
            if( arr[j] < arr[i] )
            {
                float temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
}

float binarysearch( float arr[], int studentcount, float findnum )
{
    bool check = false;
    int low = 0, high = studentcount, mid;

    while( low <= high )
    {
        mid = ( high + low ) / 2;
        if( arr[mid] == findnum )
        {
            check++;
            break;
        }
        else if( arr[mid] < findnum )
            low = mid + 1;
        else
            high = mid -1;
    }
    if( check )
    {
        cout<<"founded, The index number is: "<<mid<<endl;
    }
    else
    {
        cout<<"target not found"<<endl;
    }
}

void bubblesort( float arr[], int studentcount )
{
    for( int i = 0; i < studentcount; i++ )
    {
        for( int j = 0; j < (studentcount - i - 1 ); j++ )
        {
            if( arr[j] > arr[j+1] )
            {
                float temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

void studentinfo( int studentcount, string name[], int id[], float cgpa[] )
{
    cout<<"Number Of Students: ";
    cin>>studentcount;

    cout<<"student count: "<<studentcount<<endl;

    for( int i = 0; i < studentcount; i++ )
    {
        cout<<"student count: "<<studentcount<<endl;
        cout<<"Student No: "<<i+1<<endl;

        cout<<"Student Name: ";
        cin>>name[i];

        cout<<"Student ID: ";
        cin>>id[i];

        cout<<"Student CGPA: ";
        cin>>cgpa[i];

        cout<<endl;
    }
}

void sorting( float cgpa[], int studentcount )
{
    int choice;
    cout << "Choose a sorting method:" <<endl;
    cout << "1. Insertion Sort" <<endl;
    cout << "2. Bubble Sort" <<endl;
    cout << "3. Selection Sort" <<endl;
    cin >> choice;

    switch ( choice )
    {
        case 1:
            //insertionSort(students, numStudents);
            //break;
        case 2:
            bubblesort( cgpa, studentcount );
            break;
        case 3:
            selectionsort( cgpa, studentcount );
            //break;
        default:
            cout<< "Invalid choice. No sorting performed." <<endl;
            break;
    }
}

void showstudentinfo( int studentcount, string name[], int id[], float cgpa[]  )
{
    if( studentcount > 0 )
    {

        for( int i = 0; i < studentcount; i++ )
        {
            cout<<"Student No: "<<i+1<<endl;
            cout<<"Student Name: "<<name[i]<<endl;

            cout<<"Student ID: "<<id[i]<<endl;

            cout<<"Student CGPA: "<<cgpa[i]<<endl;

            cout<<endl;
        }
    }
    else
        cout<<"Invalid Command"<<endl;

}

void mainmanu()
{
    int studentcount ;
    string name[studentcount];
    int id[studentcount], choice;
    float cgpa[studentcount];

    cout<<"Welcome, Please Enter Any Number"<<endl;
    cout<<"1. Insert Student Info:"<<endl;
    cout<<"2. Sorting:"<<endl;
    cout<<"3. scherching:"<<endl;
    cout<<"4. Show Student Info:"<<endl;
    cin>>choice;
    switch (choice)
    {
        case 1:
            studentinfo( studentcount, name, id, cgpa );
            break;
        case 2:
            sorting( cgpa, studentcount );
            break;
        case 3:
            //scherching();
            break;
        case 4:
            showstudentinfo( studentcount, name, id, cgpa );
            break;
        default:
            cout<< "Invalid choice." <<endl;
            break;
    }
}



/*
void insertionsort( float arr, int n )
{
    for( int i = 1; i < n; i++ )
    {
        double key = arr[i];
        int j = i - 1;
        while ( j >= 0 && arr[j] > key )
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}
*/

int main()
{
    while( exite )
    {
        mainmanu();
    }



}
