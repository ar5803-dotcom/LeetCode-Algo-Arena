class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        // sort(nums.rbegin(),nums.rend());
        // return nums[k-1];
        priority_queue<int,vector<int>,greater<int>> maxheap;
        for(auto i:nums){
            maxheap.push(i);
            if(maxheap.size()>k){
                maxheap.pop();
            }
        }
        
        return maxheap.top();
    }
};