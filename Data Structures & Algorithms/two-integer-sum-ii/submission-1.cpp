class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i=0, j = numbers.size()-1, mid = (i+j+1)/2;
        vector<int>ans;
        while(i<j){
            int sum = (numbers[i]+numbers[j]);
            if( sum == target){
                ans.push_back(numbers[i]);
                ans.push_back(numbers[j]);
                break;

            }
            else if(sum>target){
                j = mid-1;
            }
            else i = mid+1;
        }
        return ans;
    }
};
