/*

output
1
2 2
3 3 3
4 4 4 4
*/

#include<iostream>
using namespace std;
int main()
{
    int row, col;

    for( row = 1; row <= 4; row++ )
        {
        for( col = 1; col <= row; col++ )
            {
            cout<<" "<<row;
            }
        cout<<endl;
        }

return 0;
}
