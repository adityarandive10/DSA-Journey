/*
Problem: Average of Three
Platform: CodeChef
Difficulty: 1141
Topic: Math
Time Complexity: O(1) per test case
Space Complexity: O(1)
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int x;
        cin >> x;

        cout << x - 1 << " " << x << " " << x + 1 << endl;
    }

    return 0;
}
