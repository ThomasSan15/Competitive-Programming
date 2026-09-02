//https://leetcode.com/problems/unique-morse-code-words/description/


class Solution {
public:
   int uniqueMorseRepresentations(vector<string>& words) {
    map<char, string> transform = {
        {'a', ".-"},
        {'b', "-..."},
        {'c', "-.-."},
        {'d', "-.."},
        {'e', "."},
        {'f', "..-."},
        {'g', "--."},
        {'h', "...."},
        {'i', ".."},
        {'j', ".---"},
        {'k', "-.-"},
        {'l', ".-.."},
        {'m', "--"},
        {'n', "-."},
        {'o', "---"},
        {'p', ".--."},
        {'q', "--.-"},
        {'r', ".-."},
        {'s', "..."},
        {'t', "-"},
        {'u', "..-"},
        {'v', "...-"},
        {'w', ".--"},
        {'x', "-..-"},
        {'y', "-.--"},
        {'z', "--.."}
    };

    set<string> ans;
    string aux;
    for(int i = 0; i < words.size(); i++){
        for(int j = 0; j < words[i].size(); j++){
            if(j == 0) aux = transform[words[i][j]];
            else aux += transform[words[i][j]] ;
        }
       
        ans.insert(aux);
        aux = "";
    }

    return ans.size();
}
};