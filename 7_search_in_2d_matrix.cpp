class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        // for (int i = 0; i < matrix.size(); i++) {
        //     for (int j = 0; j < matrix[i].size(); j++) {
        //         if (matrix[i][j] == target) {
        //             return true;
        //         }
        //     }
        // }
        // return false;
        
        int rowLow = 0;
        int rowHigh = matrix.size()-1;
        int col = matrix[0].size()-1;
        int eleRow=0;
        while(rowLow<=rowHigh){
            int rowMid = rowLow+(rowHigh-rowLow)/2;
            if(matrix[rowMid][col]==target){return true;}
            if(matrix[rowMid][col]>=target and matrix[rowMid][0]<=target){
                eleRow = rowMid; 
                break;
            }
            if(matrix[rowMid][col]>target){
                rowHigh = rowMid-1;
            }else{
                rowLow = rowMid+1;
            }
        }
        if(eleRow==-1){return false;}
        int l=0;
        int h=matrix[0].size()-1;
        while(l<=h){
            int m = l+(h-l)/2;
            if(matrix[eleRow][m]==target){return true;}
            if(matrix[eleRow][m]>target){
                h=m-1;
            }else{
                l=m+1;
            }
        }
        return false;
        }
    };