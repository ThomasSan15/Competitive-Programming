// https://leetcode.com/problems/roman-to-integer/description/

class Solution {
public:
    int romanToInt(string s) {
        map<char,int> letters = {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000},
        };
        int ans = 0;
        int mx = 0;
        for(int i = s.size() - 1; i >= 0; i--){
            if(letters[s[i]] >= mx){
                ans += letters[s[i]];
                mx = letters[s[i]];
            }else{
                ans -= letters[s[i]];
            }
        }
        return ans;
    }
};