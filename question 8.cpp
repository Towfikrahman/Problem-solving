/*
output

D D D D
C C C
B B
A

*/

#include<iostream>
using namespace std;
int main()
{

    int row, col;

    for( row = 4; row >= 1; row-- )
        {
        for( col = 1; col <= row; col++ )
            {
            cout<<" "<<( char )( row+64 );
            }
        cout<<endl;
        }

return 0;
}




