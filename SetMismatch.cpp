class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> ans;
        unordered_map<int,int> m;
        set<int> s;
        for(auto i:nums){ m[i]++; s.insert(i); }
        for(auto j:m){
            if(j.second==2) ans.push_back(j.first);
        }
        int sum = 0;
        int n1 = nums.size()*(nums.size()+1) / 2;
        for(auto k:s)  sum += k;
        ans.push_back(n1-sum);
        return ans;
    }
};