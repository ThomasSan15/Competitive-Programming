//https://leetcode.com/problems/find-target-indices-after-sorting-array/description/?envType=daily-question&envId=2026-10-19


class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        vector<int> ans;
        sort(nums.begin(),nums.end());
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == target)ans.push_back(i);
        }
        return ans;
    }
};