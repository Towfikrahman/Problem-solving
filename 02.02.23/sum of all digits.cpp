// write a c++ program to find sum of all digits. input 23617 output 2+3+6+1+7=19


#include <iostream>
using namespace std;

int main()
{
    int num, sum = 0, digit;

    cout << "Enter a number: ";
    cin >> num;

    while (num > 0) {
        digit = num % 10;
        sum += digit;
        num /= 10;
    }
    cout << "The sum of the digits is: " << sum << endl;
    return 0;
}

