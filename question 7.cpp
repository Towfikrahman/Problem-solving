/* output

a b c d
a b c
a b
a

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
            cout<<" "<<( char )( col+64 );
            }
        cout<<endl;
        }

return 0;
}
