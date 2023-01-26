#include<iostream>
using namespace std;
int main()
{
    int n, a, b, sum;
    cin >> n;
    cin >> a;
    cin >> b;
    int array[n];
    for( int i = 0; i<n; i++ ){
        cin>>array[i];
    }

     for( int i = a; i <= b; i++ ){
         sum = sum+array[i];
     }
     cout<<sum;
    return 0;
}

