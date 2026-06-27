//https://leetcode.com/problems/range-sum-query-immutable/description/

//Easy Prefix Sum problem

class NumArray {
public:
    vector<long long> prefix;
    NumArray(vector<int>& nums) {
     prefix.resize(nums.size() + 1,0);

      for(int i = 1; i <= nums.size(); i++){
        prefix[i] = prefix[i-1] + nums[i-1];
      }  
   
    }
    
    int sumRange(int left, int right) {
        cout << prefix[right+1] - prefix[left] << endl;
        return prefix[right+1] - prefix[left];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */