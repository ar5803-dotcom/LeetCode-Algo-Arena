// Intuition
// The approach involves defining a helper function solve that recursively traverses the binary tree. For each node, it checks whether its value is equal to the root value. The boolean variable isunival is used to keep track of whether all nodes have the same value. The main function isUnivalTree initializes the root value and calls the solve function, returning the final result.

// Approach
// The approach involves defining a helper function solve that recursively traverses the binary tree. For each node, it checks whether its value is equal to the root value. The boolean variable isunival is used to keep track of whether all nodes have the same value. The main function isUnivalTree initializes the root value and calls the solve function, returning the final result.

// Complexity
// Time complexity:
// O(n), where
// �
// n is the number of nodes in the binary tree. The code visits each node once in a recursive manner.

// Space complexity:
// O(h), where
// ℎ
// h is the height of the binary tree. This is the space required for the recursive call stack. In the worst case, the height of the binary tree could be equal to the number of nodes, resulting in
// O(n) space complexity.

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
// void isuni(TreeNode* root,set<int>& check){
    
//     if(root==NULL) return;
//     check.insert(root -> val);
//     isuni(root->left,check);
//     isuni(root->right,check);

// }

void solve(TreeNode* root, int unival, bool &isunival){
    if(root == NULL) return;
    if(root->val != unival) isunival = false;
    solve(root->left, unival, isunival);
    solve(root->right, unival, isunival);
}

public:
    bool isUnivalTree(TreeNode* root) {
        // set<int> s;
        // isuni(root, s);
        // if(s.size() == 1) return true;
        // return false;
        if(root == NULL) return false;
        int unival = root->val;
        bool isunival = true;
        solve(root, unival, isunival);
        return isunival;
    }
    
};