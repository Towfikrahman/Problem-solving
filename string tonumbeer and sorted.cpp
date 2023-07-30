#include<iostream>
using namespace std;

int charToInt(char c)
{
    //char c = c;
    int i = static_cast<int>(c);
    return i;
}

int main()
{
    string sen;
    cin>>sen;

    for( int i=0; i<sen.length(); i++ )
    {

        cout<<charToInt(i);
    }





}
