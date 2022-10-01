#include<iostream>
using namespace std;
int main ()
{
   int array2[10]={ 0 };
   //int zero = 0, one = 0, two = 0, three = 0, four = 0, five = 0, six = 0, seven = 0, eight = 0,nine = 0;
    int array[10]={ 1,1,2,2,1,2,3,1,1 };
    /*for ( int i = 0; i < 10; i++ )
    {
        switch ( array[i] )
        {
            case 0:
                array2[0]++;
                break;
            case 1:
                array2[1]++;
                break;
            case 2:
                array2[2]++;
                break;
            case 3:
                array2[3]++;
                break;
            case 4:
                array2[4]++;
                break;
            case 5:
                array2[5]++;
                break;
            case 6:
                array2[6]++;
                break;
            case 7:
                array2[7]++;
                break;
            case 8:
                array2[8]++;
                break;
            case 9:
                array2[9]++;
                break;
        }
    }
    */
    for ( int i = 0;i < 10; i++ )
    {
        array2[array[i]] += 1;

    }
    for ( int i = 0; i < 10; i++ )
    {
        cout<<"total count of "<<i<<" is : "<<array2[i]<<endl;
    }









   /* cout<<"total count of 0 is : "<<array2[0]<<endl;
    cout<<"total count of 1 is : "<<array2[1]<<endl;
    cout<<"total count of 2 is : "<<array2[2]<<endl;
    cout<<"total count of 3 is : "<<array2[3]<<endl;
    cout<<"total count of 4 is : "<<array2[4]<<endl;
    cout<<"total count of 5 is : "<<array2[5]<<endl;
    cout<<"total count of 6 is : "<<array2[6]<<endl;
    cout<<"total count of 7 is : "<<array2[7]<<endl;
    cout<<"total count of 8 is : "<<array2[8]<<endl;
    cout<<"total count of 9 is : "<<array2[9]<<endl;
*/
    return 0 ;
}

