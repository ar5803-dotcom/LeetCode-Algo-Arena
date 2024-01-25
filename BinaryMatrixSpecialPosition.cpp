// Intuition
// The problem involves finding and counting special positions in a binary matrix. A position is considered special if the element at that position is '1' and all other elements in its row and column are '0'.

// Approach
// The approach checks each element in the matrix. If the element is '1', it examines the entire row and column to determine if the element is the only '1' in its row and column. If so, it increments the count of special positions.

// Code
class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();
        int count = 0;

        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (mat[i][j] == 1) {
                  
                    bool isSpecial = true;

                    for (int k = 0; k < m; ++k) {
                        if (k != i && mat[k][j] == 1) {
                            isSpecial = false;
                            break;
                        }
                    }

                    for (int l = 0; l < n; ++l) {
                        if (l != j && mat[i][l] == 1) {
                            isSpecial = false;
                            break;
                        }
                    }
                    if (isSpecial) {
                        count++;
                    }
                }
            }
        }

        return count;
    }
};