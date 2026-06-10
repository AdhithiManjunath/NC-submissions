class Solution {
public:
    int f(vector<int>& nums){
        int n = nums.size();
        vector<int>dp(n+1,0);
        
        if(n==1) return nums[0];

        dp[0] = nums[0];
        dp[1] = max(nums[0], nums[1]);
        for(int i=2; i<nums.size(); i++){
            
            int take = nums[i] + dp[i-2];
            int nottake = dp[i-1];
            dp[i] = max(take, nottake);
        }
        return dp[n-1];


    }
    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n==1) return nums[0];
        vector<int>a(nums.begin()+1, nums.end());
        vector<int>b(nums.begin(), nums.begin()+n-1);
        int a1 = f(a);
        int a2 = f(b);
        return max(a1,a2);
    }
};
