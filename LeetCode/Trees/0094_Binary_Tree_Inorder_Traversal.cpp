/*
========================================================
Problem       : 94. Binary Tree Inorder Traversal
Platform      : LeetCode
Difficulty    : Easy
Topic         : Binary Tree, DFS, Recursion
Approach      : Recursive Inorder Traversal
Time          : O(N)
Space         : O(H) Auxiliary Space (Recursion Stack)
========================================================
*/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:

    void solve(TreeNode* root, vector<int>& ans){
        if(root == nullptr){
            return;
        }

        solve(root->left, ans);
        ans.push_back(root->val);
        solve(root->right, ans);
    }

    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
        solve(root, ans);
        return ans;
    }
};
