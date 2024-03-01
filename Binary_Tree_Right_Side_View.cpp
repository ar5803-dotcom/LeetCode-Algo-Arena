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
void solve(TreeNode* root , vector<int>& r, int level){
    if(!root) return;
    if(r.size()==level) r.push_back(root-> val);
    solve(root -> right,r,level+1);
    solve(root -> left,r , level+1);
}
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int> r;
        solve(root,r,0);
        return r;
    }
};
