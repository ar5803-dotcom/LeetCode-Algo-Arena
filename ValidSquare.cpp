class Solution {
    public:
    int distance(vector<int>& a, vector<int>& b) {

        int side=0;
        side=((a[0]-b[0])*(a[0]-b[0])+(a[1]-b[1])*(a[1]-b[1]));

        return side;
    }

        bool validSquare(vector<int>& p1, vector<int>& p2, vector<int>& p3, vector<int>& p4) {
            

        set<int>set;
        set.insert(distance(p1,p2));
        set.insert(distance(p1,p3));
        set.insert(distance(p1,p4));
        set.insert(distance(p2,p3));
        set.insert(distance(p2,p4));
        set.insert(distance(p3,p4));
    
        
        if(set.count(0)==0 and set.size()==2)return true;
        
        return false;   
    
}   
};
// class Solution {
// public:
//     bool validSquare(vector<int>& p1, vector<int>& p2, vector<int>& p3, vector<int>& p4) {
//         if(p1==p2 && p2==p3 && p3==p4 && p4==p1) return false;
//         vector<double> slength;
//         slength.push_back(double(sqrt(pow(p1[1]-p2[1], 2) + pow(p1[0]-p2[0], 2))));
//         slength.push_back(double(sqrt(pow(p1[1]-p3[1], 2) + pow(p1[0]-p3[0], 2))));
//         slength.push_back(double(sqrt(pow(p1[1]-p4[1], 2) + pow(p1[0]-p4[0], 2))));
//         slength.push_back(double(sqrt(pow(p2[1]-p3[1], 2) + pow(p2[0]-p3[0], 2))));
//         slength.push_back(double(sqrt(pow(p2[1]-p4[1], 2) + pow(p2[0]-p4[0], 2))));
//         slength.push_back(double(sqrt(pow(p3[1]-p4[1], 2) + pow(p3[0]-p4[0], 2))));
    
//         sort(slength.begin(), slength.end());
//         // Check if the sides and diagonals are equal
//         // if (slength[0]==0 || slength[1]==0 || slength[2]==0 || slength[3]==0 || slength[4]==0 || slength[5]==0)return false;
        
//         if(slength[0] == slength[1] && slength[1] == slength[2] && slength[2] == slength[3] && slength[4] == slength[5]){
//             return true;}
        
//         return false;
        
//     }
// };
// class Solution {
// public:
//     bool validSquare(vector<int>& p1, vector<int>& p2, vector<int>& p3, vector<int>& p4) {
//         if(p1==p2 && p2==p3 && p3==p4 && p4==p1){
//             return false;
//         }
//         double dis1;
//         double dis2;
//         double dis3;
//         double dis4;
//         double dis5;
//         double dis6;

//         dis1 = sqrt(pow(p2[0] - p1[0], 2) + pow(p2[1] - p1[1], 2));
//         dis2 = sqrt(pow(p3[0] - p2[0], 2) + pow(p3[1] - p2[1], 2));
//         dis3 = sqrt(pow(p4[0] - p3[0], 2) + pow(p4[1] - p3[1], 2));
//         dis4 = sqrt(pow(p1[0] - p4[0], 2) + pow(p1[1] - p4[1], 2));
//         dis5 = sqrt(pow(p3[0] - p1[0], 2) + pow(p3[1] - p1[1], 2));
//         dis6 = sqrt(pow(p4[0] - p2[0], 2) + pow(p4[1] - p2[1], 2));

//         vector<double> distances;
//         distances.push_back(dis1);
//         distances.push_back(dis2);
//         distances.push_back(dis3);
//         distances.push_back(dis4);
//         distances.push_back(dis5);
//         distances.push_back(dis6);

//         sort(distances.begin(), distances.end());

        
//         if (distances[0] == distances[1] && distances[1] == distances[2] && distances[2] == distances[3] && distances[4] == distances[5]) {
//             return true;
//         }
//         return false;
//     }
// };

