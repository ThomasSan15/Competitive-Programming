//https://leetcode.com/problems/find-the-degree-of-each-vertex/description/


class Solution {
public:
    vector<int> findDegrees(vector<vector<int>>& matrix) {
        vector<int> ans;
        int sum = 0;
        for(int j = 0; j < matrix[0].size();j++){
            for(int i = 0; i < matrix.size(); i++){
                sum += matrix[i][j];
            }
            ans.push_back(sum);
            sum = 0;
        }
        return ans;
    }
};