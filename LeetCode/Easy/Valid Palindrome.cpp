//https://leetcode.com/problems/valid-palindrome/description/?envType=problem-list-v2&envId=string


class Solution {
public:
    bool isPalindrome(string s) {
        for(int i = 0, j = s.size() - 1; i <= j;){
            if(isalnum(s[i]) && isalnum(s[j])){
                if(tolower(s[i]) != tolower(s[j])) return false;
                i++;
                j--;
            }else{
                if(!isalnum(s[i])){
                    i++;
                }
                 if(!isalnum(s[j])){
                    j--;
                }
            }

        }
         return true;
    }
};