class Solution {
public:
    bool isPalindrome(string s) {
        string ss ="";
        for(int i=0; i<s.size(); i++){
            if(isalnum(s[i])){
                ss+=tolower(s[i]);
            }
        }
        string sss = ss;
        reverse(sss.begin(), sss.end());
        return sss ==ss;
    }
};
