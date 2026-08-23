//https://leetcode.com/problems/pascals-triangle/description/


class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans = {{1}};
        int i = 0;
        numRows--;
        while(numRows--){
            ans.push_back({1});
            for(int j = 0; j < ans[i].size() - 1;j++){
               ans[i+1].push_back(ans[i][j] + ans[i][j+1]);
            }
            ans[i+1].push_back(1);
            i++;
        }
        return ans;
    }
};