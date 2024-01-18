class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> m;
        for(auto i:arr) m[i]++;
        // vector<int> t;
        // for(auto j:m) t.push_back(j.second);
        // sort(t.begin(),t.end());
        // for(int i=0;i<t.size()-1;i++){
        //     if(t[i]==t[i+1]) return false;
        // }
        // return true;
        set<int> s;
        for(auto a:m) s.insert(a.second);
        if(s.size()==m.size()) return true;
        return false;
    }
};