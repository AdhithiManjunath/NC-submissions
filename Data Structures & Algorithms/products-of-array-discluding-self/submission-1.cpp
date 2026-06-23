class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
            int prod = 1;
            int countzeroes =0;

            for(int i=0; i<nums.size(); i++){
                if (nums[i]==0) countzeroes++;
                else{
                prod*=nums[i];}

            }
            vector<int>ans;
            if(countzeroes>1){
               // vector<int>ans;
                for(int i=0; i<nums.size(); i++){
                    ans.push_back(0);
                }
            }
            else if(countzeroes==1){
               // vector<int>ans;
                for(int i=0; i<nums.size(); i++){
                    if(nums[i]==0){ans.push_back(prod);}
                    else ans.push_back(0);
                }
            }
            else{
               // vector<int>ans;
                for(int i=0; i<nums.size(); i++){
                    ans.push_back(prod/nums[i]);
                }
            }
            return ans;
    }
};
