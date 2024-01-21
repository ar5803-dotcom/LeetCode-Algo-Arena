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
    bool isSymmetric(TreeNode* root) {
        if(root == NULL) return true;
        return mirrorhelp(root -> left,root -> right);
    }
    bool mirrorhelp(TreeNode* l , TreeNode* r){
        if(!l || !r) return l == r;
        if(l -> val != r -> val) return false;
        return mirrorhelp(l -> left , r -> right) && mirrorhelp(l->right,r->left);
    }
};