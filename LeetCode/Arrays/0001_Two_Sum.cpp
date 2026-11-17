/*
Problem: Two Sum
Problem Number: 1
Platform: LeetCode
Difficulty: Easy
Topic: Arrays, Brute Force

Approach:
1. Traverse the array using two nested loops.
2. Start the second loop from i + 1 to avoid checking the same element.
3. Check whether nums[i] + nums[j] equals the target.
4. If found, return the indices {i, j}.
5. If no pair is found, return an empty vector.

Time Complexity: O(N^2)
Space Complexity: O(1) auxiliary space
*/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                if (nums[i] + nums[j] == target) {
                    return {i, j};
                }
            }
        }
        return {};
    }
};
