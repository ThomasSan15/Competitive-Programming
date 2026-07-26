//https://codeforces.com/problemset/problem/514/A


#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long x;
    cin >> x;
    string ans = to_string(x);
    
    for(int i = 0 ; i < ans.size(); i++){
        if(i == 0 && ans[i] != '9' && ans[i] > '4'){
            ans[i] = '0' + ('9' - ans[i]);
       
        }
        
        if(i != 0 && ans[i] > '4'){
            ans[i] = '0' + ('9' - ans[i]);
        }
        
    }
    cout << ans << endl;
    
    return 0;
}
