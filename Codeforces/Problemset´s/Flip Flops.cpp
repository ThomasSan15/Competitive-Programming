//https://codeforces.com/problemset/problem/2209/A

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
 long long n, c, k; cin >> n >> c >> k;
    vector< long long> a(n);
    inp(a);
    long long val = 0;
    sort(ALL(a));
    for(int i = 0; i < n; i++){
      //  cout << " C = " << c << " Vence a " << a[i] << " K = " << k << endl;
        if(c >= a[i]){
            
            val = c - a[i];
            if(k - val >= 0){
            a[i] += val;
            k -= val;
            }else{
                a[i] += k;
                k = 0;
            }
            c += a[i];
        }
    }
    cout << c << endl;
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