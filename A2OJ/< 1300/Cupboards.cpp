//https://codeforces.com/problemset/problem/248/A

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
    ll n = 0; cin >> n;
    int l = 0, r = 0;
    int count0l = 0, count1l = 0;
    int count0r = 0, count1r = 0;
    while(n--){
        cin >> l >> r;
        
        if(l == 0) count0l++;
        if(r == 0) count0r++;
        if(l == 1) count1l++;
        if(r == 1) count1r++;
        
    }
    cout << min(count0l, count1l) + min(count0r,count1r) << endl;
}

int main() {
    fastio

    int t = 1;

    while (t--) {
        solve();
    }

    return 0;
}