/*output

*
* *
* * *
* * * *
TAREK RAHMAN
* * * *
* * *
* *
*
*
* *
* * *
* * * *
TAREK RAHMAN
* * * *
* * *
* *
*

*/

#include<iostream>
using namespace std;
int main()
{

/*int n,row,col;
    cout<<"Enter number of lines:";
    cin>>n;
*/

    int row, col;

    for ( row = 1; row <= 5; row++ )
        {
        for ( col = 1; col <= row; col++ )
            {
            cout<<" *";
            }
        cout<<endl;
        }

    cout<< "TAREK RAHMAN"<<endl;

    for ( row = 5; row >=1; row-- )
        {
        for ( col = 1; col <= row; col++ )
            {
             cout<<" *";
            }
         cout<<endl;
        }


        for ( row = 1; row <= 5; row++ )
        {
        for ( col = 1; col <= row; col++ )
            {
            cout<<" *";
            }
        cout<<endl;
        }

    cout<< "TAREK RAHMAN"<<endl;

    for ( row = 5; row >=1; row-- )
        {
        for ( col = 1; col <= row; col++ )
            {
             cout<<" *";
            }
         cout<<endl;
        }
    return 0;
}
