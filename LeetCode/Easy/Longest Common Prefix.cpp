//https://leetcode.com/problems/longest-common-prefix/description/

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = "";
        int flag = 0;
        int num = 0;

    while(true){

        if(num >= strs[0].size()) break;
        
        char curr = strs[0][num];

        for(int i = 0; i < strs.size(); i++){
           if(curr != strs[i][num]){
                flag = 1;
                break;
           }
           if(i == strs.size() - 1 && curr == strs[i][num]) ans.push_back(strs[i][num]);
        }

        num++;

        if(flag) break;

    }
    return ans;
    }
};