//https://codeforces.com/problemset/problem/116/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    
    vector<int> a(n); 
     vector<int> b(n); 
     int ans = 0;
     int aux = 0;
     
     for(int i = 0; i < n; i++){
         cin >> a[i];
         cin >> b[i];
         
         aux -= a[i];
         aux += b[i];
         ans = max(ans,aux);
         
     }

    cout << ans << endl;
    return 0;
}
