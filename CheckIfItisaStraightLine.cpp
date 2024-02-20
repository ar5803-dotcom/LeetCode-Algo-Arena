// class Solution {
// public:
//     bool checkStraightLine(vector<vector<int>>& coordinates) {
//         long slope = (coordinates[1][1]-coordinates[1][1])/(coordinates[0][0]-coordinates[0][0]);
//         for(int i=1;i<coordinates.size();i++){
//             long checkslope = (coordinates[i+1][1]-coordinates[i][1])/(coordinates[i+1][0]-coordinates[i][0]);
//             if(checkslope == slope ) continue;
//             else return false;
//         }
//         return true;
//     }
// };
#include <vector>
using namespace std;

class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        if (coordinates.size() <= 2) return true; 
        
        int deltaX = coordinates[1][0] - coordinates[0][0];
        int deltaY = coordinates[1][1] - coordinates[0][1];
        
        for (int i = 2; i < coordinates.size(); i++) {
            int currDeltaX = coordinates[i][0] - coordinates[i - 1][0];
            int currDeltaY = coordinates[i][1] - coordinates[i - 1][1];
            
            if (deltaX * currDeltaY != deltaY * currDeltaX) {
                return false;
            }
        }
        
        return true;
    }
};
