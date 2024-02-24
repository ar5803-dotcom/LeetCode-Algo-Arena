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
    bool evaluate(TreeNode* root){
        switch(root -> val){
            case 0: return false;
            case 1: return true;
            case 2: return evaluate(root -> left) || evaluate(root -> right);
            case 3: return evaluate(root -> left) && evaluate(root -> right);
            default: return false; 
        }
    }
public:
    bool evaluateTree(TreeNode* root) {
        return evaluate(root);
    }
};
