class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        set<int>m;
        for(int i=0; i<nums.size(); i++){
            if(!m.insert(nums[i]).second) return true;
             m.insert(nums[i]);
        }
        return false;
    }
};
