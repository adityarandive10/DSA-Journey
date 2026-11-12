/*
Problem: Candies
Platform: CodeChef
Difficulty: 1018
Topic: Arrays, Hashing, Frequency Counting

Approach:
1. Use an unordered_map to count the frequency of each element.
2. Traverse all 2*N elements.
3. If any element appears more than twice, a valid split is impossible.
4. Otherwise, print Yes.

Time Complexity: O(N) average per test case
Space Complexity: O(N)
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        unordered_map<int, int> mp;
        bool valid = true;

        for (int i = 0; i < 2 * n; i++) {
            int x;
            cin >> x;

            mp[x]++;

            if (mp[x] > 2) {
                valid = false;
            }
        }

        if (valid) {
            cout << "Yes\n";
        }
        else {
            cout << "No\n";
        }
    }

    return 0;
}
