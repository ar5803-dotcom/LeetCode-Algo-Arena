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
void order(TreeNode* root,unordered_map<int,int>& m){
    if(root == NULL) return;
    m[root->val]++;
    order(root->left,m);
    order(root->right,m);
}
public:
    vector<int> findMode(TreeNode* root) {
        unordered_map<int,int> m;
        vector<int> ans;
        vector <int> temp;
        order(root,m);
        for(auto i:m) temp.push_back(i.second);
        auto maxe = std::max_element(temp.begin(),temp.end());
        for(auto j:m){
            if(j.second == *maxe) ans.push_back(j.first);
        }
        return ans;
    }
};