class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size()-1;
        vector<int>mhleft(n+1),mhright(n+1);
        mhleft[0]=height[0];
        for(int i=1; i<height.size(); i++){
            mhleft[i]= max(height[i],mhleft[i-1]);
        }
        mhright[n]=height[n];
        
        for(int i = n-1; i>0; i--){
            mhright[i] = max(height[i],mhright[i+1]);
        }
        int ans =0;
        for(int i=0; i<n; i++){
            ans+= min(mhleft[i], mhright[i]) - height[i];
        }
    return ans;
    }
};
