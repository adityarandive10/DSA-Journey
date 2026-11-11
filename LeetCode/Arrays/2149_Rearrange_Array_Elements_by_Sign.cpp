/*
Problem: Rearrange Array Elements by Sign
Problem Number: 2149
Platform: LeetCode
Difficulty: Medium
Topic: Arrays, Two Pointers

--------------------------------------------------
APPROACH 1: TWO SEPARATE VECTORS
--------------------------------------------------

Explanation:
1. Create two vectors: pos and neg.
2. Traverse the original array.
3. Store positive numbers in pos and negative numbers in neg.
4. Both vectors preserve the original relative order.
5. Insert one positive and one negative alternately into ans.

Time Complexity: O(N)
Space Complexity: O(N) auxiliary space, excluding output.

Code:
*/

/*
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> pos;
        vector<int> neg;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > 0) {
                pos.push_back(nums[i]);
            }
            else {
                neg.push_back(nums[i]);
            }
        }

        vector<int> ans;

        for (int i = 0; i < pos.size(); i++) {
            ans.push_back(pos[i]);
            ans.push_back(neg[i]);
        }

        return ans;
    }
};
*/


/*
--------------------------------------------------
APPROACH 2: DIRECT PLACEMENT USING TWO POINTERS
--------------------------------------------------

Explanation:
1. Create an answer vector of the same size as nums.
2. Initialize pos = 0 for positive numbers.
3. Initialize neg = 1 for negative numbers.
4. Traverse the original array.
5. If the current element is positive, place it at ans[pos]
   and increment pos by 2.
6. If the current element is negative, place it at ans[neg]
   and increment neg by 2.
7. Return the answer vector.

Why does this work?
- Positive numbers occupy even indices: 0, 2, 4, ...
- Negative numbers occupy odd indices: 1, 3, 5, ...
- Traversing nums in order preserves the relative order
  of positive and negative elements.

Time Complexity: O(N)
Auxiliary Space Complexity: O(1), excluding output.
Output Space Complexity: O(N).
*/

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> ans(nums.size());

        int pos = 0;
        int neg = 1;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > 0) {
                ans[pos] = nums[i];
                pos += 2;
            }
            else {
                ans[neg] = nums[i];
                neg += 2;
            }
        }

        return ans;
    }
};
