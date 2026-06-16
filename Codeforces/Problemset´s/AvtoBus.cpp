//https://codeforces.com/problemset/problem/1679/A

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
    unsigned long long n; cin >> n;
    unsigned long long min = 0;
    unsigned long long max = 0;
    if((n% 4 == 0 || n % 6 == 0) || (n > 4 && n % 2 == 0)){
    min = n / 6;
    if(n % 6 != 0){
        min++;
    }
    max = n/ 4;
    if(min == 0){
        min = 1;
    }
    if(max == 0){
        max = 1;
    }
    cout << min << " " << max << endl;
    }else{
        cout << -1 << endl;
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