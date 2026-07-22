//https://leetcode.com/problems/valid-anagram/description/?envType=problem-list-v2&envId=string


class Solution {
public:
    bool isAnagram(string s, string t) {
      vector<int> valS (26,0);
      vector<int> valT (26,0);

      if(s.size() != t.size())return false;

      for(int i = 0; i < s.size(); i++){
        valS[s[i] - 'a']++;
        valT[t[i] - 'a']++;
      }

      for(int i = 0; i < 26; i++){
        if(valS[i] != valT[i])return false;
      }

     return true; 
    }
};