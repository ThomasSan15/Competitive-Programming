//https://leetcode.com/problems/isomorphic-strings/description/


class Solution {
public:
    bool isIsomorphic(string s, string t) {
        vector<char> letters (126,' ');
        vector<int> ocuppied (126,0);

        for(int i = 0; i < s.size(); i++ ){
            if(letters[s[i] - ' '] == ' ' &&  ocuppied[t[i] - ' '] == 0){
            letters[s[i] - ' '] = t[i];
            ocuppied[t[i] - ' ']++;
            }
            if(letters[s[i] - ' '] != t[i])return false;
        }

        return true;
    }
};