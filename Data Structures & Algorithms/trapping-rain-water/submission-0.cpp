class Solution {
public:
    int trap(vector<int>& height) {
       vector<int>lm(height.size(),0);
       vector<int>rm(height.size(),0);
       int val = height[0];
       for(int i=1; i<height.size(); i++){
            lm[i] = val;
            val = max(val, height[i]);
       }
       val = height[height.size()-1];
       for(int i=height.size()-2; i>=0; i--){
            rm[i]= val;
            val = max(val, height[i]);
       }
       int ans =0;
       for(int i=0; i<height.size(); i++){
           if(min(lm[i],rm[i])-height[i] >0){
            ans+= min(lm[i],rm[i])-height[i];
           }
       }
        return ans;
    }
};
