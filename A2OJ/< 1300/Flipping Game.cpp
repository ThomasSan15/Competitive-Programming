//https://codeforces.com/problemset/problem/327/A

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
    int n = 0;
    cin >> n;
    vv a(n);
    inp(a);
    vv b(n);
    int ans = 0;
    int aux = 0;
    int f = 0;
    int maxn = INT_MIN;
    for(int i = 0; i < n;i++){
        if(a[i] == 1){  
            ans++;    
            b[i] = -1;
        }else{
            f =1;
            b[i] = 1;
        }
    }
    for(int i = 0; i < n; i++){
        aux = max(aux + b[i], b[i]);
        maxn = max(maxn, aux); 
    }
    if(f){
   cout << ans + maxn << endl;
    }else{
        cout << n - 1 << endl;
    }
}

int main() {
    fastio

    int t = 1;
    
    while (t--) {
        solve();
    }

    return 0;
}