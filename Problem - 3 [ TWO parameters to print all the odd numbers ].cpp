#include<iostream>
using namespace std;
int main()
{
    int start, end, odd = 0;
    cin>>start>>end;

    cout<<"Starting value: "<<start<<endl;
    cout<<"Ending value: "<<end<<endl;

    for( int i = start; i <= end; i++ )
    {
        if( ( i % 2 ) == 1 )
        {
            cout<<i<<" ";
        }
    }
}
