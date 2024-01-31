// Intuition
// If we perform an inorder traversal of the binary search tree, the resulting values will be sorted in non-decreasing order. Therefore, by simply traversing the tree in inorder and keeping track of the kth value encountered, we can find the kth smallest value efficiently.

// Approach
// We'll implement an inorder traversal function to traverse the binary search tree. During the traversal, we'll maintain a count of visited nodes and update a variable result when the count reaches k. This approach ensures that we find the kth smallest value without the need for sorting.

// Complexity
// Time complexity:
// O(n)

// Space complexity:
// O(n)

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

 //using inorder is more efficient as it already sorts the node values in a non-decreasing manner 
class Solution {
public:
    void inorder(TreeNode* root, vector<int> &ans){
        if(!root) return;
        inorder(root->left, ans);
        ans.push_back(root->val);
        inorder(root->right, ans);
    }
    
    int kthSmallest(TreeNode* root, int k) {
        vector<int> ans;
        inorder(root, ans);
    
    return ans[k-1];
    }
};
// class Solution {
// public:
//     void preorder(TreeNode* root, vector<int> &ans){
//         if(!root) return;
//         ans.push_back(root->val);
//         preorder(root->left, ans);
//         preorder(root->right, ans);
//     }
    
//     int kthSmallest(TreeNode* root, int k) {
//         vector<int> ans;
//         preorder(root, ans);
//         sort(ans.begin(),ans.end());
    
//     return ans[k-1];
//     }
// };