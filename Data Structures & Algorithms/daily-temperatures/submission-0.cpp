class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int>ans(temperatures.size(),0);
        stack<int>st;
        st.push(0);
        for(int i=1; i<temperatures.size(); i++){
            if(temperatures[st.top()]>temperatures[i])st.push(i);
            else{
                while(!st.empty() && temperatures[st.top()]<temperatures[i]){
                    int val = st.top();
                    ans[val] = i-val;
                    st.pop();
                }
                st.push(i);
            }
        }
        return ans;

    }
};
