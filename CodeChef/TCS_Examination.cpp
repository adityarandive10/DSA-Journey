/*
Problem: TCS Examination
Platform: CodeChef
Difficulty: 1006
Topic: Conditional Statements
Approach: Compare total scores, then DSA scores, then TOC scores.
Time Complexity: O(1) per test case
Space Complexity: O(1)
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int d1, d2, d3, s1, s2, s3;
        cin >> d1 >> d2 >> d3;
        cin >> s1 >> s2 >> s3;

        int dragonTotal = d1 + d2 + d3;
        int slothTotal = s1 + s2 + s3;

        if (dragonTotal > slothTotal)
            cout << "Dragon\n";
        else if (slothTotal > dragonTotal)
            cout << "Sloth\n";
        else if (d1 > s1)
            cout << "Dragon\n";
        else if (s1 > d1)
            cout << "Sloth\n";
        else if (d2 > s2)
            cout << "Dragon\n";
        else if (s2 > d2)
            cout << "Sloth\n";
        else
            cout << "Tie\n";
    }

    return 0;
}
