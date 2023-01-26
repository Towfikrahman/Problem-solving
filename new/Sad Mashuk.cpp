Santa is sad today, and to cure his sadness, he has decided to gamble his troubles away in a game of dice.
The casino attendant rolls a huge 1000-sided dice which has numbers from 1 to 1000
1000; if the number that comes up on top has only odd digits, the player wins, otherwise, the house wins.
Santa is naturally happier when winning at games of chance, and he becomes happy if and only if the number
n that is rolled is a winning number for him. Given n, will Santa be happy?

Input
The first line of input will contain n(1 ≤ n ≤ 1000), the number that Santa rolled.

Output
Output "HAPPY" if Santa will become happy, and "SAD" if Santa stays sad.


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
