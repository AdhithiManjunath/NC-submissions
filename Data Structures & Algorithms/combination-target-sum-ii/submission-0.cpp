class Solution {
public:
    vector<vector<int>>ans;
    void backtrack(vector<int>& candidates,int target,vector<int>& subSet, int sum, int i){
        if(sum==target){
            ans.push_back(subSet);
            return;
        }
        if(sum > target || i == candidates.size()){
            return;
        }
        subSet.push_back(candidates[i]);
        backtrack(candidates, target, subSet, sum+candidates[i], i+1);
        subSet.pop_back();
        while (i + 1 < candidates.size() && candidates[i] == candidates[i + 1]) {
            i++;
        }
        backtrack(candidates, target, subSet, sum, i+1);


    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<int>cur;
        sort(candidates.begin(), candidates.end());
        backtrack(candidates,target,cur,0,0);
        return ans;
    }
};
