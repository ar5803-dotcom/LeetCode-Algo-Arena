class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> ans;
        if(nums.size()==1) return {to_string(nums[0])};
        int c = 0;
        for(int i=0;i<nums.size();i++){
            if(i<nums.size()-1 && nums[i]+1==nums[i+1]){
                c++;

            }else {
                if(c==0) ans.push_back(to_string(nums[i]));
                else 
                    ans.push_back(to_string(nums[i]-c) + "->" + to_string(nums[i]));
                
                c = 0;
            }
        }
        return ans;
    }
};
// class Solution {
// public:
//     vector<string> summaryRanges(vector<int>& nums) {
//         vector<string>ans;
//         int c=0;
//         for(int i=0;i<nums.size();i++){
//             if(nums[i]+1==nums[i+1]){
//                 c++;
//         } 
//             else {
//                 if(c!=0){
//                     ans.push_back(to_string(nums[i]-c) + "->"+to_string(nums[i]));
//                     c=0;
//                 }
//                 else
//                     ans.push_back(to_string(nums[i]));
//             }
//         }
//         return ans;
//     }
// };
// class Solution {
// public:
//     vector<string> summaryRanges(vector<int>& nums) {
//         vector<string>ans;
//         int c=0;
//         if(nums.size()==1) return {to_string(nums[0])};
//         for(int i=0;i<nums.size();i++){
//             if(i < nums.size() - 1 && nums[i]+1==nums[i+1]){
//                 c++;
//         } 
//             else {
//                 if(c!=0){
//                     ans.push_back(to_string(nums[i]-c) + "->"+to_string(nums[i]));
//                     c=0;
//                 }
//                 else 
//                     ans.push_back(to_string(nums[i]));
//         }
//     }
//         return ans;
//     }
// };