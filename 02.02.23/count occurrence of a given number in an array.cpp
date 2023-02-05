// write a c++ program that will count occurrence of a given number in an array


#include <iostream>
using namespace std;

int main() {
    int n, x;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the number to be counted: ";
    cin >> x;

    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            count++;
        }
    }

    cout << "The number of occurrences of " << x << " in the array is " << count << endl;

    return 0;
}
