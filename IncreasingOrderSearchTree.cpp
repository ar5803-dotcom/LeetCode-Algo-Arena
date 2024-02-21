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
    TreeNode* constructBST(vector<int>& sortedValues, int& index) {
        if (index == sortedValues.size()) return nullptr;
        
        TreeNode* newNode = new TreeNode(sortedValues[index]);
        index++;
        newNode -> left = NULL;
        newNode->right = constructBST(sortedValues, index);
        
        return newNode;
    }
    
    void inorderTraversal(TreeNode* root, vector<int>& sortedValues) {
        if (root == NULL) return;
        //use inorder traversal so that we dont have to sort the vector separately
        inorderTraversal(root->left, sortedValues);
        sortedValues.push_back(root->val);
        inorderTraversal(root->right, sortedValues);
    }
public:
    TreeNode* increasingBST(TreeNode* root) {
        vector<int> sortedValues;
        inorderTraversal(root, sortedValues);
        
        int index = 0;
        return constructBST(sortedValues, index);
    }
};
