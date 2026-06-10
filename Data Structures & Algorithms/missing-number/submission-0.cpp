class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int tot_sum = (n*(n+1))/2;
        for(int i=0; i<nums.size(); i++){
            tot_sum-=nums[i];
        }
        return tot_sum;
    }
};
