//https://codeforces.com/contest/2185/problem/D

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
    int n, m, h; cin >> n >> m >> h;
    vv a(n);
    inp(a);
    vv sum(n+1);

    int pos = 0;
    int value = 0;
    while(m--){
        cin >> pos >> value;
        if(sum[pos] + value + a[pos-1] > h ){
            sum[pos] = 0;
        }else{
        sum[pos] += value + a[pos-1];
        }
    }
    imp(sum);   
    
    for(int i = 1; i < sum.size(); i++){
        a[i-1] = sum[i] % h;
    }

    imp(a);
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