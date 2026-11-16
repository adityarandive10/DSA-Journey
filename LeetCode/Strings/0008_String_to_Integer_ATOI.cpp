/*
Problem: String to Integer (atoi)
Problem Number: 8
Platform: LeetCode
Difficulty: Medium
Topic: Strings, Simulation, Character Handling, Overflow

Approach:
1. Skip all leading whitespace.
2. Determine the sign (+ or -).
3. Traverse the string while characters are digits.
4. Convert each character into an integer using s[i] - '0'.
5. Build the number using ans = ans * 10 + digit.
6. Check INT_MAX and INT_MIN to handle overflow.
7. Return the final number with the correct sign.

Time Complexity: O(N)
Space Complexity: O(1)
*/

class Solution {
public:
    int myAtoi(string s) {
        int i = 0;

        int n = s.size();
        int sign = 1;
        long long ans = 0;

        while (i < n && s[i] == ' ') {
            i++;
        }

        if (i < n && s[i] == '-') {
            sign = -1;
            i++;
        }
        else if (i < n && s[i] == '+') {
            i++;
        }

        while (i < n && s[i] >= '0' && s[i] <= '9') {
            int digit = s[i] - '0';

            ans = ans * 10 + digit;

            if (sign * ans >= INT_MAX) {
                return INT_MAX;
            }

            if (sign * ans <= INT_MIN) {
                return INT_MIN;
            }

            i++;
        }

        return sign * ans;
    }
};
