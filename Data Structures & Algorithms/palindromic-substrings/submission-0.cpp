class Solution {
public:
    int countSubstrings(string s) {
         int startIdx = 0;
            int len =0;
            int c =0;
        for(int i=0; i<s.size(); i++){
            int l =i, r=i;
            
        while(l>=0 && r<s.size() && s[l]==s[r]){
            // if(r-l+1 > len){
            //     startIdx = l;
            //     len = r-l+1;

            // }
            c++;
            l--;
            r++;

        }
        l=i;
        r=i+1;
        while(l>=0 && r<s.size()&& s[l]==s[r]){
            // if(r-l+1>len){
            //     startIdx = l;
            //     len = r-l+1;

            // }
            c++;
            l--;
            r++;

        }

        }
        return c;
    }
};
