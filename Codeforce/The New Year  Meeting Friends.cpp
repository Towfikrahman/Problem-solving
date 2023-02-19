/*
There are three friend living on the straight line Ox in Lineland. The first friend lives at the point x1, the second friend lives at the point x2, and the third friend lives at the point x3. They plan to celebrate the New Year together, so they need to meet at one point. What is the minimum total distance they have to travel in order to meet at some point and celebrate the New Year?

It's guaranteed that the optimal answer is always integer.

Input
The first line of the input contains three distinct integers x1, x2 and x3 (1 ≤ x1, x2, x3 ≤ 100) — the coordinates of the houses of the first, the second and the third friends respectively.

Output
Print one integer — the minimum total distance the friends need to travel in order to meet together.

link: https://codeforces.com/problemset/problem/723/A


*/

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    // Calculate the maximum and minimum values of a, b, and c
    int max_val = max(a, max(b, c));
    int min_val = min(a, min(b, c));

    // Calculate the total distance
    int total_distance = max_val - min_val;

    cout << total_distance << endl;

    return 0;
}
