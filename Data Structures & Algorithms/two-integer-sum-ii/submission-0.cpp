class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int>ans;
        for(int i=0; i<numbers.size()-1; i++){
            int val = target-numbers[i];
            if(find(numbers.begin()+i+1, numbers.end(), val)!= numbers.end()){
                auto it =find(numbers.begin()+i+1, numbers.end(), val); 
                ans.push_back(i+1);
                int val = it- numbers.begin();
                ans.push_back(val +1);
                break;
            }

        }
        return ans;
    }
};
