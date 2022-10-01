
#include <iostream>
using namespace std;
int main()
{

    int year, num4, num100, num400;
        cout<<"Enter the year to be tested: "<<endl;
        cin>>year;

        num4 = year % 4;
        num100 = year % 100;
        num400 = year % 400;

    if  ( num4 == 0 && num100 != 0 )
        cout<<"It is a leap year."<<endl;

        else if( num400 == 0 )
        cout<<"It is a leap year."<<endl;

    else
        cout<<"It's not a leap year."<<endl;


return 0;

}
