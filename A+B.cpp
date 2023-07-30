#include <iostream>
#include <string>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--)
    {
       char a, b, symbol;
    cin >> a >> symbol >> b;

    switch (symbol) {
        case '+':
            cout << a + b << endl;
            break;
        case '-':
            cout << a - b << endl;
            break;
        case '*':
            cout << a * b << endl;
            break;
        case '/':
            if (b == '0') {
                cout << "Error: Division by zero" << endl;
            } else {
                cout << a / b << endl;
            }
            break;
        default:
            cout << "Error: Invalid symbol" << endl;
    }

    }
    return 0;
}
