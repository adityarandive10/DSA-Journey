/*
Problem: Can Place Flowers
Problem Number: 605
Platform: LeetCode
Difficulty: Easy
Topic: Arrays, Greedy

Approach:
1. Traverse the flowerbed.
2. Check whether the current position is empty.
3. Check whether the left and right positions are empty or out of bounds.
4. If all conditions are satisfied, plant a flower.
5. Increment count and update the current position.
6. Return true if count reaches n; otherwise return false.

Time Complexity: O(N)
Space Complexity: O(1)
*/

class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int count = 0;
        int size = flowerbed.size();

        if (n == 0) {
            return true;
        }

        for (int i = 0; i < size; i++) {
            if (flowerbed[i] == 0) {
                if ((i == 0 || flowerbed[i - 1] == 0) &&
                    (i == size - 1 || flowerbed[i + 1] == 0)) {

                    flowerbed[i] = 1;
                    count++;
                }
            }

            if (count >= n) {
                return true;
            }
        }

        return false;
    }
};
