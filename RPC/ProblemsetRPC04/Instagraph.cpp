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

//const ll INF = 1e18;
//const int MOD = 1e9 + 7;

#ifdef LOCAL
#define debug(x) cerr << #x << " = " << x << endl;
#else
#define debug(x)
#endif


void solve() {
    int n,m; cin >> n >> m;
    int val = 0;
    int v = 0;
    vector<set<int>> u(n + 1);
    vv ans(n+1);
    pair<int,int> impr = {1,0};
    
   
    
    for(int i = 0; i < m; i++){
        cin >> val;
       cin >> v;
       u[val].insert(v);
    }

 for(int i = 1; i <= n; i++){
    for(int x : u[i]){
        if(u[x].find(i) == u[x].end()){
            ans[x]++;
        }
    }
}

for(int i = 1; i <= n; i++){
    if(ans[i] > impr.second){
        impr = {i, ans[i]};
    }
}

cout << impr.first << " " << impr.second << endl;



}

int main() {
    fastio

    int t = 1;
    
    while (t--) {
        solve();
    }

    return 0;
}