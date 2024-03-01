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
    void leftview(TreeNode* root, vector<int> &ans,int level){
        if(root==nullptr){
            return;
        }
        if(ans.size() == level){
            ans.push_back(root->val);
        }
        leftview(root->left,ans,level+1);
        leftview(root->right,ans,level+1);

    }

public:
    int findBottomLeftValue(TreeNode* root) {
        vector<int> ans;
        leftview(root,ans,0);
        return ans[ans.size()-1];

    }
};


