class Solution {
public:
    vector<int>plusOne(vector<int>& digits) {
        for(int i=digits.size()-1;i>=0;i--){
            if(digits[i]!=9){
                digits[i]++;
                return digits;
            }else digits[i]=0;
        }
        if(digits[0]==0){
            vector<int>newnumber(digits.size()+1,0);
            newnumber[0] = 1;
            return newnumber;
        }
        return{-1,-1};
    }
};