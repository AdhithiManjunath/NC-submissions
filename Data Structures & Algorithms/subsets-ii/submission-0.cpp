class Solution {
public:
    vector<vector<int>>ans;
    void backtrack(int i, vector<int> subset, vector<int>& nums){
        if(i == nums.size()){
            ans.push_back(subset);
            return;
        }
        subset.push_back(nums[i]);
        backtrack(i+1, subset, nums);
        subset.pop_back();
        while(i+1<nums.size() && nums[i]== nums[i+1]){
            i++;
        }
        backtrack(i+1, subset, nums);
    };

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        
       
        //vector<int>temp;
        sort(nums.begin(), nums.end());
        backtrack(0,{}, nums);
        return ans;

    }
};
