//https://leetcode.com/problems/duplicate-zeros/description/


class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        vector<int> ans(arr.size(),0);
        for(int i = 0, j = 0; i < arr.size() && j < ans.size(); i++){
            if(arr[i] != 0){
                ans[j] = arr[i];
                j++;
            }else{
                j+= 2;
            }
        }
        arr = ans;
    }
};