class Solution {
public:
    map<int,string>m;
    string encode(vector<string>& strs) {
        string s ="";
        for(int i=0; i<strs.size(); i++){
            s=s+to_string(i)+" ";
            m[i]= strs[i];
        }
        return s;
    }

    vector<string> decode(string s) {
        vector<string>ans;
        int val =0;
        for(int i=0; i<s.size(); i++){
            if(s[i]==' '){
                ans.push_back(m[val]);
                val = 0;
            }
            else{
                int n = s[i]-'0';
            val = (val*10)+n;
            }
            
        }
        return ans;
    }
};
