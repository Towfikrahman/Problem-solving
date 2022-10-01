#include<iostream>
using namespace std;
int main ()
{
    int zero = 0, one = 0, two = 0, three = 0, four = 0, five = 0, six = 0, seven = 0, eight = 0,nine = 0;
    int array[]={ 1,1,2,2,1,2,3,1,1 };
    for ( int i = 0; i < 9; i++ )
    {
        switch ( array[i] )
        {
            case 0:
                zero++;
                break;
            case 1:
                one++;
                break;
            case 2:
                two++;
                break;
            case 3:
                three++;
                break;
            case 4:
                four++;
                break;
            case 5:
                five++;
                break;
            case 6:
                six++;
                break;
            case 7:
                seven++;
                break;
            case 8:
                eight++;
                break;
            case 9:
                nine++;
                break;
        }
    }
    cout<<"total count of 0 is : "<<zero<<endl;
    cout<<"total count of 1 is : "<<one<<endl;
    cout<<"total count of 2 is : "<<two<<endl;
    cout<<"total count of 3 is : "<<three<<endl;
    cout<<"total count of 4 is : "<<four<<endl;
    cout<<"total count of 5 is : "<<five<<endl;
    cout<<"total count of 6 is : "<<six<<endl;
    cout<<"total count of 7 is : "<<seven<<endl;
    cout<<"total count of 8 is : "<<eight<<endl;
    cout<<"total count of 9 is : "<<nine<<endl;

    return 0 ;
}
