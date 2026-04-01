//https://codeforces.com/problemset/problem/2193/B
#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
#define pb push_back
#define all(x) (x).begin(), (x).end()

using ll = long long;

void solve(){
    ll n, l, r;
     ll value = 0 , b = 0;
            
    cin >> n;
    l = -1, r = -1;
    vector<int> a(n);
    for(int i = 0; i < n ; i++){
        cin >> a[i];
    }

   for(int i = 0; i < n - 1 ; i++){

        if(a.at(i) > a.at(i + 1) && i == 0){
            l = i;
            b = 1;
        }
         if(a.at(i) > a.at(i + 1) && b != 1){
            l = i;
            break;
        }
        if(a.at(i) < a.at(i + 1)){
            b = 0;
            break;
        }
   }
   value = 0;
   for (int i = l; i < n - 1; i++){
        cout << a[i] << " ES Max A " << a[i + 1] << endl;
        if(a[i] > a[i + 1]){
           value = a[i];
            r = max(r,value);
        }
        if(i + 1 >= n){
            value = a[i];
            r = max(r,value); 
        }
        cout << "VALOR MAX " << a[r] << endl;
   }

   if(b == 0){
   reverse(a.begin() + l , a.begin() + r + 1);
   }
    for(int i = 0; i < n ; i++){
        cout << a[i] <<  " ";
    }

}

int main(){
    fastio
    
    int t = 0;
    cin >> t;

    while(t--){
        solve();
        cout << endl;
    }

    return 0;
}