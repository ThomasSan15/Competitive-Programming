//https://leetcode.com/problems/longest-palindrome/description/

class Solution {
public:
    int longestPalindrome(string s) {

        vector<int> letters(26*2, 0);
        int ans = 0;
        int flag = 0;

        for(int i = 0; i < s.size(); i++){
            if(s[i] >= 65 && s[i] <= 90){
                letters[s[i] - 65 + 26]++;
            }else{
                  letters[s[i] - 97]++;
            }
        }
        for(int i = 0; i < letters.size(); i++){

            if(letters[i] % 2 == 0 && letters[i] != 0){
                ans += letters[i];
            }else if(letters[i] > 2){
                ans += letters[i] - 1;
                flag = 1;
            }
            else if(letters[i] != 0)flag = 1;
            
        }

       return flag? ans + 1 : ans;
    }
};