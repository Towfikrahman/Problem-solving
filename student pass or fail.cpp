#include<iostream>
using namespace std;
int main()
{
    int x, r;

    cout<<"Enter subject mark: ";
    cin>>x;

    if( x>=90 & x<=100 )
        cout<<"wow you are on fire, your grade is: A+ ";

        else if( x>=85 & x<90 )
            cout<<"You are pass, and the grade is: A";

        else if( x>=80 & x<85 )
            cout<<"You are pass, and the grade is: B+";

        else if(  x>=75 & x<80 )
            cout<<"You are pass, and the grade is: B";

        else if(  x>=70 & x<75 )
            cout<<"You are pass, and the grade is: C+";

        else if(  x>=65 & x<70 )
            cout<<"You are pass, and the grade is:C";

        else if(  x>=60 & x<65 )
            cout<<"You are pass, and the grade is: D+";

        else if(  x>=50 & x<60 )
            cout<<"You are pass, and the grade is: D";

        else if( x<50 )
            cout<<"You are failed" ;

    else
            cout<<"Invalid result";

return 0;

}
