class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>mapping;
        for(int i=0; i<strs.size(); i++){
            string ss = strs[i];
            sort(strs[i].begin(), strs[i].end());
            mapping[strs[i]].push_back(ss);
        }
        vector<vector<string>> ans;
        for(auto &it: mapping){
            ans.push_back(it.second);
        }
        return ans;
    }
};
