/*
========================================================
Problem       : 1295. Find Numbers with Even Number of Digits
Platform      : LeetCode
Difficulty    : Easy
Topic         : Array, Math
Approach      : Digit Counting using Division
Time          : O(N * D)
Space         : O(1) Auxiliary Space
========================================================
*/

class Solution {
public:
    int findNumbers(vector<int>& nums) {

        int ans = 0;

        for (int i = 0; i < nums.size(); i++) {
            int num= nums[i];
            int count =0; 

            while(num > 0){
                count++;
                num /= 10;
            }
             if(count % 2 == 0 ){
                ans++;
             }
        }

        return ans;
    }
};
