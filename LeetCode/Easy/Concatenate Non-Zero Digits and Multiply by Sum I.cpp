//https://leetcode.com/problems/concatenate-non-zero-digits-and-multiply-by-sum-i/description/

class Solution {
public:

    long long sumAndMultiply(int n) {
        string num;
        int sum = 0;
        while(n>0){
            if(n% 10 != 0){
                num += to_string(n%10);
                sum += n % 10;
            }
            n/= 10;
        } 
        num == ""? num = '0': num;
        reverse(num.begin(), num.end());
        int val = std::stoi(num);
        return 1LL * sum * val ;

    }
};