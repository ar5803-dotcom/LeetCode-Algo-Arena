#include <vector>
#include <algorithm>

class Solution {
public:
    std::vector<int> sortEvenOdd(std::vector<int>& nums) {
        std::vector<int> even, odd;


        for (int i = 0; i < nums.size(); i++) {
            if (i % 2 == 0) {
                even.push_back(nums[i]);
            } else {
                odd.push_back(nums[i]);
            }
        }
        std::sort(even.begin(), even.end());
        std::sort(odd.rbegin(), odd.rend()); 

        std::vector<int> ans;
        for (int i = 0; i < even.size(); i++) {
            ans.push_back(even[i]);
            if (i < odd.size()) {
                ans.push_back(odd[i]);
            }
        }

        return ans;
    }
};