#include<iostream>
using namespace std;
int main() {
    int n, mod;
    cin >> n;
    while (n != 0) {
        mod = n % 10; n = n / 10;
        if (mod % 2 == 1) {
            if (n == 0) {
                cout << "HAPPY" << endl;
                break;
            }}
        else {
            cout << "SAD" << endl;
            break;
        }}
    return(0);
}
