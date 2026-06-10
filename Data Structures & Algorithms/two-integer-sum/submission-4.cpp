class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>ans;
        for(int i=0; i<nums.size()-1; i++){
            int n1 = target- nums[i];
            if(find(nums.begin()+i+1, nums.end(),n1)!=nums.end()){
                ans.push_back(i);
                ans.push_back(find(nums.begin()+i+1, nums.end(),n1)-nums.begin());
                break;
            }
        }
        return ans;
    }
};
