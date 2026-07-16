//https://leetcode.com/problems/sum-of-gcd-of-formed-pairs/description/?envType=daily-question&envId=2026-07-16

class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        int mx = 0;
        long long ans = 0;

        vector<int> prefixgcd(nums.size(), 0);

        for(int i = 0; i < nums.size(); i++){
            mx = max(mx,nums[i]);
            prefixgcd[i] = gcd(nums[i],mx);
        } 

        sort(prefixgcd.begin(), prefixgcd.end());

       
        for(int i = 0, j = nums.size() - 1; i < j; i++, j--){
            ans += gcd(prefixgcd[i], prefixgcd[j]);
        }
        return ans;

    }
};