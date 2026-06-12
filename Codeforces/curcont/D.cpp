//

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
typedef vector<ii> vii;
typedef vector<vector<ll>> mtx;
typedef vector<set<ll>> vs;
typedef vector<map<ll,ll>> vmp;

//const ll INF = 1e18;
//const int MOD = 1e9 + 7;

#ifdef LOCAL
#define debug(x) cerr << #x << " = " << x << endl;
#else
#define debug(x)
#endif


void solve() {
    int n,k; cin >> n >> k;
    vv a(n);
    inp(a);
    int winner = 0;
    int x = 0; 
    int pos = 0;
    int count = 0;
    for(int i = 0;  i < n; i++){
           if(x < a[i] && a[i] <= k){
            pos = i;
            x = a[i];
       
           }
    }
    if(x == 0){
        x = a[0];
    }
    a.erase(a.begin() + pos);
    
    for(int i = 0; i < n - 1; i++){
        if(a[i] - x >= 0 && a[i] - x <= k){
            count++;
        }
    }
    cout << count << endl;
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