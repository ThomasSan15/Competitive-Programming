//https://codeforces.com/problemset/problem/2204/C

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
    ll a,b,c,m; cin >> a >> b >> c >> m;
    ll ca = 0, cb = 0, cc = 0;
    for(int i = 1; i <= m; i++ ){
        if(i % a == 0 && i % b == 0 && i % c == 0 ){
            ca += 2;
            cb += 2;
            cc += 2;
        }else if(i % a == 0 && i % b == 0){
                ca += 3;
                cb += 3;
            }else if(i % b == 0 && i % c == 0){
                cc += 3;
                cb += 3;
        }else if(i % a == 0 && i % c == 0){
                ca += 3;
                cb += 3;
        }else if(i % a == 0){
                ca += 6;
        }else if(i % b == 0){
                cb += 6;
        }else if(i % c == 0){
                cc += 6;
        }
    }
    cout << ca << " " << cb << " " << cc << endl;
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