//http://codeforces.com/problemset/problem/2194/B

#include <bits/stdc++.h>
#include <vector>

using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
#define pb push_back
#define all(x) (x).begin(), (x).end()

using ll = long long;

void solve(){
      ll n, x, y;
        cin >> n >> x >> y;

        vector<ll> a(n);
        ll K = 0; 
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            K += (a[i] / x) * y;
        }

        ll best = 0;
        for (int i = 0; i < n; i++) {
            ll lose_self = (a[i] / x) * y;
            ll total = a[i] + (K - lose_self);
            best = max(best, total);
        }

        cout << best << endl;
    }
        
    

int main(){
    fastio

    int t = 1;
     cin >> t;

    while(t--){
        solve();
    }

    return 0;
}