class Solution {
public:
    bool binsearch(int row, vector<vector<int>>& matrix, int target){
        int low =0, high = matrix[0].size()-1;
        while(low<=high){
            int mid = low+(high-low)/2;
            if(matrix[row][mid] == target)return true;
            else if(matrix[row][mid] > target)high = mid-1;
            else low = mid+1;
        }
        return false;
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        bool ans = false;
        for(int i=0; i<matrix.size(); i++){
            if(target>= matrix[i][0] && target<= matrix[i][matrix[0].size()-1]){
                ans = ans | binsearch(i, matrix, target);
            }
        }
        return ans;
    }
};
