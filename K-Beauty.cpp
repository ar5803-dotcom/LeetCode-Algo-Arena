#include <iostream>
#include <string>

class Solution {
public:
    int divisorSubstrings(int num, int k) {
        int c = 0;
        std::string str = std::to_string(num);

        for (int i = 0; i <= str.size() - k; ++i) {
            std::string ss = str.substr(i, k);
            int n = stoi(ss);

            if (n != 0 && num % n == 0) {
                c++;
            }
        }
        return c;
    }
};