//https://leetcode.com/problems/add-binary/description/


class Solution {
public:
    string addBinary(string a, string b) {
       string ans;
        int carry = 0;
       for(int i = a.size() - 1, j = b.size() - 1 ; i >= 0 || j >= 0; i--, j--){
            if(i >= 0 && j >= 0){
                if(a[i] == '1' && b[j] == '1')
                {   if(carry){
                        ans.push_back('1');
                    }else{
                        ans.push_back('0');
                    }
                    carry = 1;
                }else if(a[i] == '1' || b[j] == '1'){
                     if(carry){
                        ans.push_back('0');
                        carry = 1;
                    }else{
                        ans.push_back('1');
                    }
                }else{
                     if(carry){
                        ans.push_back('1');
                        carry = 0;
                    }else{
                        ans.push_back('0');
                    }
                }
            }else{
                if(i < 0){
                   carry? b[j] == '1'? ans.push_back('0') : ans.push_back('1') : ans.push_back(b[j]);
                   if(carry && b[j] != '1') carry = 0;
                }else{
                    carry? a[i] == '1'? ans.push_back('0') : ans.push_back('1') : ans.push_back(a[i]);
                   if(carry && a[i] != '1') carry = 0;
                   cout << " CARRY " << carry << " VAL " << a[i] << endl ;
                }
            }
       }
       if(carry) ans.push_back('1');
       reverse(ans.begin(), ans.end());
       return ans;
    }
    
};