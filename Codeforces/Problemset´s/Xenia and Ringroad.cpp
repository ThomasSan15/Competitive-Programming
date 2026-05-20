//https://codeforces.com/problemset/problem/339/B

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
    ll n, m = 0; cin >> n >> m;
    vv a(m);
    ll time = 0;
    inp(a);
    
    
    for(int i = 0;i < m; i++){
        
         if(i == 0){
            time += a[i];
         }else{
            if(a[i] < a[i - 1]){
                time += abs(a[i - 1] - n) + a[i];
            }else if(a[i] == a[i-1]){
                continue;
            }else{
                time += a[i] - a[i-1];
            }
         }
}
    cout << time - 1<< endl;
}

int main() {
    fastio

    int t = 1;
    
    while (t--) {
        solve();
    }

    return 0;
}