class Solution {
public:
    int minSteps(string s, string t) {
        int c= 0;
        unordered_map<char,int> m;
        for(auto i:s) m[i]++;
        for(auto j:t) {
            if(m.find(j)!=m.end()){
                m[j]--;
                if(m[j]==0) m.erase(j);
            } else c++;
        }
        return c;
    }
};