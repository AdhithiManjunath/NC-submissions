class Solution {
public:
    int robbing(int start, int end, vector<int>& nums){
        // int n = end-start;
        int n = nums.size();
        if(nums.size()==0) return 0;
        if(nums.size()==1) return nums[0];
        vector<int>dp(n+1,0);
        dp[0] = nums[0];
        dp[1] = max(nums[1],nums[0]);
        for(int i=2; i<nums.size(); i++){
            dp[i] = max(dp[i-1],nums[i]+dp[i-2]);
        }
        return dp[n-1];
    }
    int rob(vector<int>& nums) {
        int a =robbing(0,nums.size(),nums);
        // int b =robbing(1,nums.size(),nums);
        // return max(a,b);
        return a;
    }
};
