//https://leetcode.com/problems/largest-number-after-digit-swaps-by-parity/description/


class Solution {
public:
    int largestInteger(int num) {
        string nm = to_string(num);
        string imp;
        string par;

        while(num > 0){
            if((num % 10) % 2 == 0){
                par += (num % 10) + '0';
            }else{
                imp += (num % 10) + '0';
            }
            num /= 10;
        }
        sort(imp.rbegin(), imp.rend());
        sort(par.rbegin(), par.rend());
        for(int i = 0, o = 0,e = 0; i < nm.size(); i++){
            if((nm[i] - '0') % 2 == 0){
                nm[i] = par[e];
                e++;
            }else{
                nm[i] = imp[o];
                o++;
            }
        }
        num = stoi(nm);
        return num;


    }
};