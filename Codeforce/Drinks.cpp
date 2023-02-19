#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    double drinks[n];
    double total_percent = 0.0;

    for (int i = 0; i < n; i++) {
        cin >> drinks[i];
        total_percent += drinks[i];
    }

    double average_percent = total_percent / n;
    cout.precision(12);
    cout << fixed << average_percent << endl;

    return 0;
}

