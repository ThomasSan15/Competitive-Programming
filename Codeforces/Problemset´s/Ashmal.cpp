//https://codeforces.com/problemset/problem/2180/B

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

// const ll INF = 1e18;
// const int MOD = 1e9 + 7;

#ifdef LOCAL
#define debug(x) cerr << #x << " = " << x << endl;
#else
#define debug(x)
#endif

int aux(string a , string b){
    for(int i = 0; i < a.size(); i++){
        if(a.at(i) < b.at(i)){
            return 1;
        }
         if(a.at(i) > b.at(i)){
            return 2;
        }
    }
    return 0;
}

void solve() {
    int n; cin >> n;
    vector<string> a(n);
    int b = 1;
    
    for(int i = 0; i < n; i++){
       cin >> a[i];
    }
  while(b){
    b = 0;
    for(int i = 0; i < n - 1; i++){
            
        if(aux(a[i], a[i + 1]) == 2){
            swap(a[i], a[i + 1]);
            b = 1;
        }
    }
}

    for(int i = 0; i < n; i++){
        cout << a[i];
    }
    cout << endl;
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