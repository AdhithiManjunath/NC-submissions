class Solution {
public:
    
    bool canPartition(vector<int>& nums) {
      int sum =0;
      int n = nums.size();
      for(auto it: nums) sum+=it;
      if(sum%2 !=0)return false;
      vector<vector<bool>>dp(n+1, vector<bool>((sum/2)+1,false));
      for(int i=0; i<=nums.size(); i++){
            dp[i][0] = true;
      }
      int target = sum/2;
      

      for(int i=1; i<=nums.size(); i++){
        for(int j=1; j<=target; j++){
            if(nums[i-1]<=j){
                dp[i][j] = dp[i-1][j] || dp[i-1][j-nums[i-1]];
            }
            else{
                dp[i][j] = dp[i-1][j];
            }
        }
      }
      return dp[n][target];
    }
};
