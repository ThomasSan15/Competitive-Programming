//https://codeforces.com/problemset/problem/742/A

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
    ll n; cin >> n;

    if(n == 0){
        cout << 1 << endl;
    }else{
        if(n % 10 == 1 ||  n % 10 == 5 || n % 10 == 7){
            cout << 8 << endl;
        }else if(n % 10 == 2 ||  n % 10 == 6  || n % 10 == 8){
            cout << 4 << endl;
        }else if(n % 10 == 3  || n % 10 == 9){
            cout << 2 << endl;
        }else{
            cout << 6 << endl;
        }
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