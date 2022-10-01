#include <iostream>
#include<stdio.h>
#include<string.h>
#include<cstring>
using namespace std;


int main()
{
    cout<<"Enter how many names you want: ";
    int t;
    cin>>t;
    cout<<"Enter names: \n";
    int i=0;
    char namei[30];

    while (t-->=0)
        {


                gets(namei);

                cout<<"Name"<<i+1<<"="<<namei[30];
                 i++;
        }


       /* char add[]="1";
         for(int i=0; i<=t; i++)
            {
                cout<<name[i]<<endl;
            }*


        int j=0;


        for(int i=0; i<=t; i++)
            {
        if(strcmp(name[i],name[i+1])!=0)
         {
             cout<<name<<j+1<<endl;

         }
         else{
            cout<<"OK"<<endl;
         }

            }
*/

return 0;

}
