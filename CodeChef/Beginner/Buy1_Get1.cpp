/*
Problem: Buy1-Get1
Platform: CodeChef
Difficulty: 1191
Topic: HashMap, Frequency Counting
Time Complexity: O(N) per test case
Space Complexity: O(K), where K is the number of distinct characters
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        unordered_map<char, int> mp;

        for (int i = 0; i < s.size(); i++) {
            mp[s[i]]++;
        }

        int cost = 0;

        for (auto it : mp) {
            cost += (it.second + 1) / 2;
        }

        cout << cost << endl;
    }

    return 0;
}
