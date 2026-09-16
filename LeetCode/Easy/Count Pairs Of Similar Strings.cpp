//https://leetcode.com/problems/count-pairs-of-similar-strings/description/


class Solution {
public:
    int similarPairs(vector<string>& words) {
        int ans = 0;
        unordered_set<char> used;
        string aux;

        for(string &s : words){
            sort(s.begin(), s.end());
        }

        for(string &s: words){
            for(char c : s){
                if(!used.count(c)){
                    used.insert(c);
                    aux += c;
                }
            }
            s = aux;
            aux = "";
            used.clear();
        }

        for(int i = 0; i < words.size() - 1; i++){
            for(int j = i + 1; j < words.size(); j++){
                if(words[i] == words[j]){
                    ans++;
                }
            }
        }
        return ans;
    }
};