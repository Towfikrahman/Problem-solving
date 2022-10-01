#include<iostream>
using namespace std;
int main()
{
    int first = 0, second = 1 , count = 0, f, n;
    cout<<"Enter the number: ";
    cin>>n;

    while ( count < n )
        {
        if( count <= 1 )
             f = count;
        else
            {
             f = first + second;
             first = second;
             second = f;
            }
        cout<<f<<" ";
        count++;
        }

return 0;

}






