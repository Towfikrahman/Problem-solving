#include <bits/stdc++.h>
using namespace std;



int a,b;

void solve() {
    cin >> a >> b;
    if (a < b) swap(a,b);
    int dif= abs(a-b);
    int threeAndOne= dif/2;
    int ans= min(threeAndOne,b) + (b-min(threeAndOne,b))/2;
    cout << ans << "\n";
}

int main() {

    int t; cin >> t;
    while (t--) solve();
}
