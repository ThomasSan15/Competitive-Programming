//https://leetcode.com/problems/gcd-of-odd-and-even-sums/description/?envType=daily-question&envId=2026-07-15


class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int sumOdd = 0, sumEven = 0;
       for(int i = 1; i <= n * 2; i++){
            if(i % 2 == 0)sumEven += i;
            else sumOdd += i;
       } 
        return __gcd(sumOdd,sumEven);
    }
   
};