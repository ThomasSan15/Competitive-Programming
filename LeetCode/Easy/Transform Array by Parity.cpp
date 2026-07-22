//https://leetcode.com/problems/transform-array-by-parity/description/?envType=problem-list-v2&envId=sorting


class Solution {
public:
    vector<int> transformArray(vector<int>& nums) {
        int even = 0;
     

        for(int i = 0; i < nums.size(); i++){
            if(nums[i] % 2 == 0)even++;
        }
        for(int i = 0; i < nums.size(); i++){
            if(even == 0){
                nums[i] = 1;
            }else{
                nums[i] = 0;
                even--;
            }
        }
        return nums;
    }
};