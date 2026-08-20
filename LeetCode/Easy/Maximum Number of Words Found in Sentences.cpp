//https://leetcode.com/problems/maximum-number-of-words-found-in-sentences/description/


class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
       int ans = 1;
       int aux = 1;

       for(int i = 0; i < sentences.size(); i++){
            for(int j = 0; j < sentences[i].size(); j++){
                if(sentences[i][j] == ' ')aux++;
            }
            ans = max(ans,aux);
            aux = 1;
       }
       
       return ans;
    }
};
