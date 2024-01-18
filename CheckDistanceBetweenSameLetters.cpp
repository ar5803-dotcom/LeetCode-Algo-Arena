class Solution {
public:
    bool checkDistances(string s, vector<int>& distance) {
        for(int i = 0; i < s.size(); i++) {
            for(int j = i + 1; j < s.size(); j++) {
                if(s[i] == s[j]) {
                    int ind = j - i - 1;
                    int index = int(s[i]);
                    if (distance[index - 97] != ind) return false; 
                }
            }
        }
        return true;
    }
};
