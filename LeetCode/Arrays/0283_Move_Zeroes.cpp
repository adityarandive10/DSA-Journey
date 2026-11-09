/*
Problem: Move Zeroes
Platform: LeetCode
Problem Number: 283
Difficulty: Easy
Topic: Arrays, Two Pointers
Approach: Two Pointers + Swapping
Time Complexity: O(N)
Space Complexity: O(1)
*/

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                swap(nums[i], nums[j]);
                j++;
            }
        }
    }
};
