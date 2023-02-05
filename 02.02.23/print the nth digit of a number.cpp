// write a c++ program to print the nth digit of a number where n is a positive number

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num, index, digit;

    cout << "Enter a number: ";
    cin >> num;

    cout << "Enter the index of the desired digit (1-based indexing): ";
    cin >> index;

    int length = log10(num) + 1;
    digit = (num / (int)pow(10, length - index)) % 10;

    cout << "The " << index << "th digit from the right end of " << num << " is " << digit << endl;

    return 0;
}


