class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        vector<char> copy = letters;
        sort(copy.begin(),copy.end());
        for(auto i:copy){
            if(i>target) return i;
        }
        return letters[0];
    }
};