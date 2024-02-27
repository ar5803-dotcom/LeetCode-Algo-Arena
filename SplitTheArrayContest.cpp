class Solution {
public:
    bool isPossibleToSplit(vector<int>& nums) {
        unordered_map<int,int> m;
        for(auto i: nums){ m[i]++; if(m[i]>2) return false;}
        // for(auto v: m){
        //     if(v.second>2) return false;
        // }
        return true;
    }
};