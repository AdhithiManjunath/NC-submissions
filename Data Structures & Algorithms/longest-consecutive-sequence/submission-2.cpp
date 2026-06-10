class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int>ns;
        for(int i=0; i<nums.size(); i++){
            ns.insert(nums[i]);
        }
        int len =0;
        for(int i=0; i<nums.size(); i++){
            if(ns.find(nums[i]-1) == ns.end()){
                int j=0;
                while(j<nums.size()){
                    if(ns.count(nums[i]+j)){j++;}
                    else break;
                }
                len = max(len , j);
            }
        }
        return len;
    }
};
