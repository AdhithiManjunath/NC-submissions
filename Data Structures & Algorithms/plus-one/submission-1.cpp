class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        long num =0;
        for(int i=0; i<digits.size(); i++){
            num = num*10+digits[i];
        }
        num+=1;
        vector<int>ans;
        while(num){
            ans.push_back(num%10);
            num/=10;
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
