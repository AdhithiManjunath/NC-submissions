class Solution {
public:
    void changeValues(vector<vector<int>>& matrix, int row, int col){
        for(int i=0; i<matrix.size(); i++){
            if(matrix[i][col]!=0){matrix[i][col] = INT_MAX;}
        }
        for(int i=0; i<matrix[0].size(); i++){
            if(matrix[row][i]!=0){matrix[row][i] = INT_MAX;}
        }
    }
    void setZeroes(vector<vector<int>>& matrix) {
        vector<vector<int>>m = matrix;
        int maxi = INT_MAX;
        for(int i=0; i<matrix.size(); i++){
            for(int j=0; j<matrix[0].size(); j++){
                if(matrix[i][j] ==0){
                    changeValues(matrix,i,j);
                }
            }
        }
        for(int i=0; i<matrix.size(); i++){
            for(int j=0; j<matrix[0].size(); j++){
                if(matrix[i][j] == maxi && matrix[i][j]!=m[i][j]){
                    
                    matrix[i][j] = 0;
                }
            }
        }
        

    }
};
