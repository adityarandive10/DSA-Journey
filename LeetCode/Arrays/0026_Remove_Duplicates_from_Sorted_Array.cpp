/*
Problem: Remove Duplicates from Sorted Array
Problem Number: 26
Platform: LeetCode
Difficulty: Easy
Topic: Arrays, Two Pointers

Approach:
- Two Pointers
- i traverses the array.
- j tracks the position of the last unique element.

Time Complexity: O(N)
Space Complexity: O(1)
*/

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int j=0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] != nums[j]){
                j++;
                nums[j] = nums[i];
            }
        }
        return j+1;
    }
};
