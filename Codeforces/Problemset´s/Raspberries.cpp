//https://codeforces.com/problemset/problem/1883/C

#include <bits/stdc++.h>
//#include <iostream>
//#include <algorithm>
//#include <complex>
//#include <map>
//#include <set>
//#include <string>
//#include <vector>
//#include <numeric>
//#include <array>
//#include <cassert>

using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
#define pb push_back
#define fst first
#define snd second
#define fore(i,a,b) for(ll i = a, jet = b; i < jet; i++)
#define ALL(x) (x).begin(), (x).end()
#define SZ(x) (int)(x).size()
#define imp(v) {for(auto i : v) cout << i << " "; cout << "\n";}
#define inp(v) {for(auto &i : v) cin >> i;}

typedef long long ll;
typedef pair<ll,ll> ii;
typedef vector<ll> vv;

//const ll INF = 1e18;
//const int MOD = 1e9 + 7;

#ifdef LOCAL
#define debug(x) cerr << #x << " = " << x << endl;
#else
#define debug(x)
#endif


void solve() {
 int n , k; cin >> n >> k;
 vv a(n);
 inp(a);
 int ans = INT_MAX;
 int val = 0;
 int even = 0;
 if(k == 4){
        for(int i = 0; i < n; i++){
            val = a[i];
            if(val % 2 == 0){
                even++;
            }
            if(val <= k){
        ans = min(ans, k-val);
         }else{
        if(val % k == 0){
            ans = min(ans, (val % k)  );
        }else{
        ans = min(ans, k - (val % k)  );
    }
    }
        }
        if(even >= 2){
            ans = 0;
        }else{
        ans = min(ans,2 - even);
        }
 }else{
    for(int i = 0; i < n; i++){
        val = a[i];
    if(val <= k){
        ans = min(ans, k-val);
    }else{
        if(val % k == 0){
            ans = min(ans, (val % k)  );
        }else{
        ans = min(ans, k - (val % k)  );
    }
    }
    }
 }
 cout << ans << endl;

}

int main() {
    fastio

    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}