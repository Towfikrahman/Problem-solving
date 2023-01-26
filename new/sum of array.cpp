Given an array of N numbers and two indices, determine the sum of the numbers in the array between (and including) those two indices.
Take this array for example:
13 7 20 1 8
The sum of the numbers between and including the indices 1 and 4 is:
7 + 20 + 1 + 8 = 36

Input
The first line of the input will contain three integers N, A, B (0 < N < 100, 0 ≤ A < B < N). A and B are the two indices.
The following line will contain N integers, each between 1 and 1000.

Output
Print the sum of the subarray.

Sample
Input	       Output
5 1 4
13 7 20 1 8      36




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
     }cout<<sum;
    return 0;
}

