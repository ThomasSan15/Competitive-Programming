//https://codeforces.com/problemset/problem/467/A


#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin >> n;
    int p, q;
    int ans = 0;
    
    while(n--){
        cin >> p >> q;
        if(p + 2 <= q)ans++;
    }
    
    cout << ans << endl;
    return 0;
}
