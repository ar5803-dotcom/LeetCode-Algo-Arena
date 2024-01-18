class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int r =  matrix.size();
        int c =  matrix[0].size();
        vector<int> v1;
        vector<int> v2;
       
        int i=matrix.size();
        int j = matrix[0].size();
        for( int k=0;k<i*j;k++){
            int r = k/j;
            int c = k%j;
            if(matrix[r][c]==0){
                v1.push_back(r);
                v2.push_back(c);
            }
        }
        for(auto it1:v1){
            for(int i=0; i<c ;i++) matrix[it1][i]=0;
        }
        for(auto it2:v2){
            for(int i=0; i<r ;i++) matrix[i][it2]=0;
        }

    }
};