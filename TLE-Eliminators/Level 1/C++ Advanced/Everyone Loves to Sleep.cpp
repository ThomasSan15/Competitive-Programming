//https://codeforces.com/problemset/problem/1714/A

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
        int n, h,m; cin >> n >> h >> m;
        int rest = 0;
        int time = 0;
        int hi = 0;
        int mi = 0;
        int result = INT_MAX;
        time = h* 60 + m;
        while(n--){
            cin >>hi >> mi;
            rest =  ((hi * 60) + mi) - time;
            if(rest <= 0){
                rest = abs(rest);
            }
            result = min(result,rest);
        }
        h = result / 60;
        m = result % 60;
        cout << h << " " << m << endl;
        
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