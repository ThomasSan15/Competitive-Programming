//https://leetcode.com/problems/minimum-number-of-pushes-to-type-word-i/description/?envType=daily-question&envId=2026-07-30


class Solution {
public:
    int minimumPushes(string word) {
        if(word.size() <= 8){
            return word.size();
        }else{
            
            int ans = 8;
            int totalLength = word.size() - 8;
                if(totalLength <= 8){
                    ans += totalLength * 2;
                    return ans;
                }else{

                    ans += 8 * 2;
                    totalLength -= 8;

                        if(totalLength <= 8){
                            ans += totalLength * 3;
                            return ans;
                        }else{
                            ans += 8 * 3;
                            totalLength -= 8;
                            return (totalLength > 0? ans += totalLength * 4 : ans);
                             }
                    }
            }
    }
};