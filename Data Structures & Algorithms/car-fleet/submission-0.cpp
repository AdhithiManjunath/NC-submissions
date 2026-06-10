class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int,int>>pp;
        for(int i=0; i<position.size(); i++){
            pp.push_back({position[i],speed[i]});
        }
        sort(pp.rbegin(), pp.rend());
        stack<double>st;
        for(int i=0; i<pp.size(); i++){
            double val = (double)(target- pp[i].first)/pp[i].second;
            if(!st.empty() && val<=st.top()){
                continue;
            }
            else{
                st.push(val);
            }
        }
        return st.size();
    }
};
