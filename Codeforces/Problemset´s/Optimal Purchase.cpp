//https://codeforces.com/problemset/problem/2230/A

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
    int n,a,b; cin >> n >> a >> b;
    ll ans = 0;
    
    
    while(n > 0){
        if(n >= 3 && a*3 > b){
            ans += b;
            n -= 3;
        }else if(a*3 <= b) {
            ans += a * n;
            n = 0;
        }else if(n == 2 && a*2 > b) {
            ans += b;
            n = 0;
        }else if(n == 1 && a > b) {
            ans += b;
            n = 0;
        }else{
            ans += a;
            n --;
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