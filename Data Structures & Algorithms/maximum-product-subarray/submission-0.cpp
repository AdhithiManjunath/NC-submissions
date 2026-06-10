class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int mini= nums[0], maxi = nums[0];
        int res = nums[0];
        for(int i=1; i<nums.size(); i++){
            int v1 = nums[i]*mini;
            int v2 = nums[i]*maxi;
            mini = min(nums[i],min(v1,v2));
            maxi = max(nums[i],max(v1,v2));
            res = max(res, maxi);
        }
        return res;
    }
};
