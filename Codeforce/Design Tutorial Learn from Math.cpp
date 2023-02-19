#include <iostream>
using namespace std;

bool isComposite(int n) {
    if (n < 4) {
        return false;
    }
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            return true;
        }
    }
    return false;
}

int main() {
    int n;
    cin >> n;

    for (int i = 4; i < n; i++) {
        if (isComposite(i) && isComposite(n - i)) {
            cout << i << " " << n - i << endl;
            break;
        }
    }

    return 0;
}

