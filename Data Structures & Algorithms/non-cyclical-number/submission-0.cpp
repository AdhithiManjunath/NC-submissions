class Solution {
public:
    bool isHappy(int n) {
        set<int>s;
        s.insert(n);
        while(n!=1){
            //int num =n;
            int a =0;
            while(n){
                a += pow(n%10,2);
                n/=10;
            }
            if(s.count(a))return false;
            else{
                s.insert(a);
                n=a;
            }
        }
        return true;
    }
};
