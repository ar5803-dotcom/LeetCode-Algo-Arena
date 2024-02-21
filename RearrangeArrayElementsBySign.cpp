class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> temp1, temp2;
        
        for(auto i : nums){
            if(i < 0) temp1.push_back(i);
            else temp2.push_back(i);
        }
        
        nums.clear(); 
        
        int size = min(temp1.size(), temp2.size());
        for(int i = 0; i < size; i++){
            nums.push_back(temp2[i]);
            nums.push_back(temp1[i]);
        }
    
        return nums;
    }
};
