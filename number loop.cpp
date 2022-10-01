#include<iostream>
using namespace std;

int main ()
{
   int n;
    cout<<"Enter number for continu the the loop: ";

    cin>>n;
   do
   {
       n = n+1;

       cout<<n<<endl;
   }while( n >0 );

   return 0;
}
