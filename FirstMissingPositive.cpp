class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
    //     // set<int> s;
        int n = nums.size();
       
       
    //     // for(int i=0;i<n;i++) s.insert(nums[i]);
    //     // for(auto k:s){
            
    //     // }
    //     vector<int>::iterator it;
    //     it = find (vec.begin(), vec.end(), ser);
    //     if (it != vec.end())
    // {
    //     std::cout << "Element " << ser <<" found at position : " ;
    //     std::cout << it - vec.begin() << " (counting from zero) \n" ;
    // }
    // bool found = false;
    // int i;
    // if(n==1){
    //     if(nums[0]<=0 || nums[0]>1) return 1;
    //     else return 2;
    
    // }
    // for(i=1;i<=n;i++){
    // auto it = find (nums.begin(), nums.end(), i);
    // if (it != nums.end()) found = true;
    // else found = false;
    // if(found==false) return i;
    // }
    sort(nums.begin(),nums.end());
    int k =1;
    for(int i=0;i<n;i++){
        if(nums[i]==k) k++;
    }
    return k;
    
    }

};