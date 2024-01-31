// Intuition
// The idea is to perform a depth-first search (DFS) traversal of the binary tree while keeping track of the maximum value encountered in the path from the root to the current node. If the value of the current node is greater than or equal to the maximum value encountered so far, it is considered a "good" node.

// Approach
// We implement a recursive DFS function solve that takes a node, the maximum value encountered so far in the path, and a count of good nodes. We traverse the tree recursively, updating the maximum value encountered in the path as we go along. If the value of the current node is greater than or equal to the maximum value, we increment the count of good nodes. We continue this process for both the left and right subtrees.

// Complexity
// Time complexity:
// O(n)

// Space complexity:
// O(h)

// Code
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
    void solve(TreeNode* root, int maxVal, int& c) {
        if (!root) return;
        if (root->val >= maxVal) {
            c++;
            maxVal = root->val;
        }
        solve(root->left, maxVal, c);
        solve(root->right, maxVal, c);
    }
public:
    int goodNodes(TreeNode* root) {
        int c = 0;
        solve(root, root->val, c);
        return c;
    }
};