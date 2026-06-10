class Solution {
public:
    bool isValid(string s) {
        unordered_map<char, char>valid;
        valid[')']='(';
        valid['}']='{';
        valid[']']='[';
        set<char>left = {'(','{','['};
        set<char>right = {')','}',']'};
        stack<char>st;
        for(int i=0; i<s.size();i++){
            if(left.find(s[i])!=left.end())st.push(s[i]);
            else if(right.find(s[i])!= right.end()){
                if(st.empty()) return false;
                else if(valid[s[i]] == st.top())st.pop();
                else return false;
            }
        }
        return st.empty();




    }
};
