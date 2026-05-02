//https://codeforces.com/contest/2227/problem/C

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
#define imp(v) {for(auto i : v) cout << i << " ";}
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
    int n; cin >> n;
    vv a(n);
    inp(a);
    vv m6;
    vv m2;
    vv m1;
    vv m3;
    for(int x = 0; x < n; x++){
        if(a[x] % 6 == 0){
            m6.push_back(a[x]);
        }else if(a[x] % 2 == 0){
            m2.push_back(a[x]);
        }else if(a[x] % 3 == 0){
            m3.push_back(a[x]);
        }else{
            m1.push_back(a[x]);
        }
    }
    imp(m6);
    imp(m2);
    imp(m1);
    imp(m3);

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