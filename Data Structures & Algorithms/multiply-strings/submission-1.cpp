class Solution {
public:
    string multiply(string num1, string num2) {
        long n1 = stoi(num1);
        long n2 = stoi(num2);
        long ans = n1*n2;
        string a = to_string(ans);
        return a;
    }
};
