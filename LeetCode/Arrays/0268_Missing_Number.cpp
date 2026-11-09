/*
Problem: Missing Number
Problem Number: 268
Platform: LeetCode
Difficulty: Easy
Topic: Arrays, Sorting

Approach:
- Sort the array.
- Check if the first element is 0.
- Traverse the array and compare adjacent elements.
- If nums[i] + 1 != nums[i+1], return nums[i] + 1.
- If no gap is found, return nums.size().

Time Complexity: O(N log N)
Space Complexity: Depends on sorting implementation.
*/

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        if (nums[0] != 0)
            return 0;

        for(int i=0; i<nums.size()-1; i++){
            if(nums[i] + 1 != nums[i+1]){
                return nums[i]+1;
            }
        }
        return nums.size();
    }
};
