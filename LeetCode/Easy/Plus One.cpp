//https://leetcode.com/problems/plus-one/description/


class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> ans;

        for(int i = digits.size() -1 ; i >= 0; i--){

            if(i == digits.size() -1){

                if(digits[i] == 9){

                    do{
                        ans.push_back(0);
                        i--;
                    }while(i >= 0 && digits[i] == 9);
                    i >= 0 ? ans.push_back(digits[i] + 1) : ans.push_back(1);
                   
                }else{
                    ans.push_back(digits[i] + 1);
                }
            }else if(i >= 0){
                ans.push_back(digits[i]);
            }
        }

       reverse(ans.begin(),ans.end()); 
       return ans;
    }
};