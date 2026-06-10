class Solution {
public:
    bool isValid(string s) {
        unordered_map<char,char>map;
        map['}'] ='{';
        map[')'] ='(';
        map[']'] ='[';
        vector<char>start = {'(','[','{'};
        stack<char>st;
        for(int i=0; i<s.size(); i++){
            if(find(start.begin(), start.end(),s[i])!=start.end()){
                st.push(s[i]);
            }
            else {
                if(st.empty() || st.top()!= map[s[i]])return false;
                else st.pop();
            }
        }

        return st.empty();

    }
};
