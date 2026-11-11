/*
Problem: Majority Element
Problem Number: 169
Platform: LeetCode
Difficulty: Easy
Topic: Arrays, Hashing
Approach: Use an unordered_map to count element frequencies. Return an element when its frequency exceeds N/2.
Time Complexity: O(N) average
Space Complexity: O(N)
*/

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> mp;
        int m = nums.size() / 2;

        for(int i = 0; i < nums.size(); i++) {
            mp[nums[i]]++;

            if(mp[nums[i]] > m) {
                return nums[i];
            }
        }

        return -1;
    }
};
