#include<iostream>
using namespace std;
int main()
{
    int  i, max, smax;
    cout<<"Enter lines number: ";
   // cin>>n;
    int array[5]={10, 20, 30, 40, 50};

    //for( i = 0; i < n; i++ )
    //{
    //    cout<<"Enter elements "<<i + 1<<" = ";
    //    cin>>array[i];
   // }
    max = array[0];
    smax = -2;
    for( i = 0; i < 5; i++ )
    {
        if ( max < array[i] )
        {
          //  smax = max;
            max = array[i];
            //cout<<i<<" max = "<<max<<endl;
        }
        if ( smax < array[i] < max ){
            smax= array[i];

        }
            //cout<< i<<" second = "<<second<<endl;

    }
       // if ( second < array[i] && array[i] != max )
         //   {
          //      second = array[i];
       //     }


    /*second=array[0];

    for ( i=1; i<n; i++ )
    {
        if ( second< array[i] && array[i] != max )
        {
            second = array[i];
        }
    }*/
    cout<<"large number is: "<< max<<endl;
    cout<<"the second large is: "<<smax<<endl;

    return 0;
}

