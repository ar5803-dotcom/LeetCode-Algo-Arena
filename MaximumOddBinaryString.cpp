#include <string>
using namespace std;

class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        sort(s.begin(),s.end());
        int j = 0;
        for(int i=0;i<s.size()-1;i++){
            if(s[i]=='1') {swap(s[i],s[j]); j++;}
        }
        return s;
    }
};
