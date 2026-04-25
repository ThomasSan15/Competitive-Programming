//https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/R

#include <bits/stdc++.h>
#include <algorithm>
#include <complex>
#include <map>
#include <set>
#include <string>
#include <vector>
#include <numeric>
#include <array>
#include <cassert>

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
 int n;cin >> n;
  vv a(n);
  vv b(n);
  inp(a);
  inp(b);
     sort(a.begin(), a.end());
     sort(b.begin(), b.end());
     fore(i,0,n){
        if(a.at(i) != b.at(i)){
            cout << "no" << endl;
            return void();
        }

     }
     cout << "yes" << endl;
}

int main() {
    fastio

    int t = 1;
    
    while (t--) {
        solve();
    }

    return 0;
}