//https://codeforces.com/contest/2229/problem/C1

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
    int n; cin >> n;
    vv a(n);
    inp(a);
    vv ans;
    int actual = -1;
    int neg = 0;

    for(int i = n - 1; i >= 0; i--){
        if(a.at(i) < 0){
            neg = 1;
        }
        if((i < n - 1 && a.at(i) < 0 && a.at(i+1) > 0 && actual == 1) || 
        (i < n - 1 && a.at(i) > 0 && a.at(i+1) < 0 && actual == -1) || 
         (i == n - 1 && a.at(i) > 0)){
            ans.push_back(i + 1);
            actual *= -1; 
        }
    }
    if(neg == 0){
        cout << 1 << endl;
        cout << n << endl;
    }else{

    cout << ans.size() << endl;
    imp(ans);
    }
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