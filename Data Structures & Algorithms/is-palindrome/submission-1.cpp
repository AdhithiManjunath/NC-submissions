class Solution {
public:
    bool isPalindrome(string s) {
        int i=0, j= s.size()-1;
        int n = s.size();
        while(i<=j){
            while(i<n && (s[i]==' ' || !isalnum(s[i])))i++;
            while(j>=0 && (s[j]==' ' || !isalnum(s[j])))j--;
            if(tolower(s[i])!=tolower(s[j]))return false;
            i++; j--;
        }
        return true;
    }
};
