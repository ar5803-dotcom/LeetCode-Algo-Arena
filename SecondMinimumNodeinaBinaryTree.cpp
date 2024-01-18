// #include <set>
// #include <vector>
// #include <climits>  // for INT_MAX

// struct TreeNode {
//     int val;
//     TreeNode* left;
//     TreeNode* right;
//     TreeNode() : val(0), left(nullptr), right(nullptr) {}
//     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//     TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
// };

class Solution {
    void solve(TreeNode* root, std::set<int>& v) {
        if (root == nullptr) return;
        v.insert(root->val);
        solve(root->left, v);
        solve(root->right, v);
    }

public:
    int findSecondMinimumValue(TreeNode* root) {
        std::set<int> v;
        solve(root, v);
        auto it = v.begin();
        if(v.size()>1) return *++it;
        return -1;
        // if (v.size() < 2) {
        //     return -1;  // Not enough distinct values
        // }

        // std::vector<int> s(v.begin(), v.end());
        // sort(s.begin(),s.end());
        // return s[1];
    }
};