class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        if(n == 0) return false;
        int m = matrix[0].size();
        if(m == 0) return false;
        for(int i = 0; i<n; i++){
            if(target <= matrix[i][m-1] && target >= matrix[i][0]){
                int low = 0;
                int high = m-1;
                while(low<=high){
                    int mid = (low+high)/2;
                    if(matrix[i][mid] == target) return true;
                    else if(matrix[i][mid] < target) low = mid+1;
                    else high = mid-1;
                }
            }
        }
        return false;
    }
};