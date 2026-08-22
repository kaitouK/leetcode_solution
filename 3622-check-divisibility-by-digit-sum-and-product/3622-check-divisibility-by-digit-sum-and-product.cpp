class Solution {
public:
    bool checkDivisibility(int n) {
        string digit = to_string(n);
        int sum = 0, product = 1;
        for (auto& y : digit) {
            sum += y - '0';
            product *= y - '0';
        }
        return n%(sum + product)==0;
    }
};