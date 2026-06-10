class Solution {
public:
    int dfs(vector<int>& nums, int i, int j,vector<vector<int>>&dp){
        if(i == nums.size()) return 0;

        if(dp[i][j+1]!=-1)return dp[i][j+1];
        int LIS = dfs(nums, i+1, j,dp);
        if(j ==-1 || nums[j]<nums[i]){
            LIS = max(LIS , 1+ dfs(nums, i+1,i,dp));
        }
        return dp[i][j+1] = LIS;

    }
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>>dp(n+1, vector<int>(n+1,-1));
        return dfs(nums, 0,-1,dp);
        
    }
};
