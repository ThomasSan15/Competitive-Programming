//https://leetcode.com/problems/remove-duplicates-from-sorted-array/description/

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int> used(201, 0);
        int sz = 0;

        for(int i = 0,pos = 0; i < nums.size(); i++){
            if(nums[i] < 0)nums[i] = nums[i] * -1 + 100;
            if(used[nums[i]] == 0){
                used[nums[i]]++;
                if(nums[i] > 100){
                    nums[pos] = nums[i] * -1 + 100;
                }else{
                nums[pos] = nums[i];
                }
                pos++;
                sz++;
            }
        }
        return sz; 

    }
};