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
void solve (TreeNode* root ,bool isleft , int &ans){
    if(root == NULL) return;
    if(!root -> left && !root -> right && isleft ) ans += root->val;
    solve(root->left,true ,ans);
    solve(root->right,false,ans);
}
public:
    int sumOfLeftLeaves(TreeNode* root) {
        int ans = 0;
        bool isleft = false;
        solve(root,isleft,ans);
        return ans;
    }
};