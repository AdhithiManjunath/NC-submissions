class Solution {
public:
    bool dfs(vector<int>& nums, int i , int target, vector<vector<int>>&dp){
        if(target==0) return true;

        if(i == nums.size() || target<0) return false;
        if(dp[i][target]!=-1)return dp[i][target];
        dp[i][target] = dfs(nums, i+1, target, dp) || dfs(nums, i+1, target- nums[i],dp);
        return dp[i][target];

    }
    bool canPartition(vector<int>& nums) {
      int sum =0;
      for(auto it: nums) sum+=it;
      if(sum%2 !=0)return false;
      vector<vector<int>>dp(nums.size(), vector<int>((sum/2)+1,-1));
      return dfs(nums, 0, sum/2,dp);
    }
};
