class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int r = matrix[0].size();
        int c = matrix.size();
        
        if(r == 0 || c == 0){
            return 0;
        }
        
        int min = 0;
        int max = r*c -1;
        
        while(min <= max){
            int mid = (min+max)/2;
            int buf = matrix[mid/r][mid % r];
            if(buf == target){
                return 1;
            }
            else if(buf < target){
                min = mid + 1;
            }
            else if (buf > target){
                max = mid - 1;
            }
        }
        return 0;
    }
};
