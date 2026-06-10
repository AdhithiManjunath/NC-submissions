class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int prod =1;
        int zc =0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==0)zc++;
            else prod*=nums[i];
        }
        vector<int>ans(nums.size(),0);
        if(zc>1){
            return ans;
        }
        else if(zc==1){
            for(int i=0; i<nums.size(); i++){
                if(nums[i]==0)ans[i] = prod;
            }
            return ans;
        }
        else {
            for(int i=0; i<nums.size(); i++){
                ans[i] = prod/nums[i];
            }
            return ans;
        }

    }
};
