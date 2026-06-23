class Solution {
public:
    bool isPalindrome(string s) {
        string ans ="";
        for(int i=0; i<s.size(); i++){
            if(isalnum(s[i])){
                ans+=tolower(s[i]);
            }
        }
        string a2 = ans;
        reverse(ans.begin(), ans.end());
        return ans==a2;
    }
};
