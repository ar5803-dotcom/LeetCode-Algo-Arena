#include <vector>

class Solution {
public:
    std::vector<int> leftRightDifference(std::vector<int>& nums) {
        int n = nums.size();
        std::vector<int> left(n, 0);
        std::vector<int> right(n, 0);

        int sl = 0;
        for (int i = 1; i < n; ++i) {
            sl += nums[i - 1];
            left[i] = sl;
        }

        int s2 = 0;
        for (int i = n - 2; i >= 0; --i) {
            s2 += nums[i + 1];
            right[i] = s2;
        }
        
        std::vector<int> ans;
        for (int i = 0; i < n; ++i) {
            ans.push_back(abs(right[i] - left[i]));
        }

        return ans;
    }
};
