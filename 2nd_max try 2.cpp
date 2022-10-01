#include<iostream>
using namespace std;
int main()
{
    int  i, max, smax;

    int array[7]={43, 54, 65, 76, 87, 31, 32};

    max = array[0];
    smax = array[1];
    int tmax = array[2];
    for( i = 0; i < 5; i++ )
    {
        if ( max < array[i] )
        {
            tmax = smax;
            smax = max;
            max = array[i];
        }
        if ( smax < array[i] && array[i] < max )
            {
            tmax = smax;
            smax= array[i];
        }
        if ( tmax < array[i] && array[i] < smax )
        {
            tmax = array[i];
        }

    //cout<<max<<" , "<<smax<<endl;
    }

    cout<<"large number is: "<< max<<endl;
    cout<<"the second large is: "<<smax<<endl;
    cout<<"the third large is: "<<tmax<<endl;
    return 0;
}


