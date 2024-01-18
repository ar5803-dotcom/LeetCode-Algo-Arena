class Solution{
    public:
        int maxArea(vector <int> &height){
                int i = 0;
                int j = height.size()-1;
                int maxvol = 0;
                while(i<j){
                    int currmax = min(height[i],height[j]) * (j-i);
                    if(currmax>maxvol) maxvol = currmax;
                    if(height[i]<height[j]) i++;
                    else j--;
                }
            return maxvol;
        }
};
// class Solution {
// public:
//     int maxArea(vector<int>& height) {
//         int n = height.size();
//         // int i= height[0];
//         // int j = height[n-1];
//         int max = 0 ;
//         for(int i = 0;i<n;i++){
//             for(int j = n-1;j>i;j--){
//                 int maxvol = min(height[i],height[j]) * (j-i) ; 
//                 if(maxvol > max) max = maxvol;
//             }
//         }
//         return max;
//     }
// };
// class Solution{
//     public: 
//         int maxArea(vector<int>& height) {
//             int i=0;
//             int j = height.size()-1;
//             int max_area = 0;
//             while(i<j){
//                 int a = min(height[i],height[j])*(j-i);
//                 if(a>max_area) max_area = a;
//                 if(height[i]<height[j]){
//                     i++;
//                 }
//                 else j--;
//             }
//             return max_area;
//         }
// };

























