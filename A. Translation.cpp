#include <iostream>
using namespace std;
int main()
{
    string original, reversed;
    cin >> original >> reversed;

    bool ismatch = true;

    for ( int i = 0; i < original.length(); i++ )
    {
        if ( original[i] != reversed[original.length() - i - 1] )
        {
            ismatch = false;
            break;
        }
    }

    if ( ismatch )
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}

