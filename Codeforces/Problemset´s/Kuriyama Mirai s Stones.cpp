//https://codeforces.com/problemset/problem/433/B

#include <bits/stdc++.h>
// #include <iostream>
// #include <algorithm>
// #include <complex>
// #include <map>
// #include <set>
// #include <string>
// #include <vector>
// #include <numeric>
// #include <array>
// #include <cassert>

using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
#define pb push_back
#define fst first
#define snd second
#define fore(i,a,b) for(ll i = a, jet = b; i < jet; i++)
#define ALL(x) (x).begin(), (x).end()
#define RALL(x) (x).rbegin(), (x).rend()
#define SZ(x) (int)(x).size()
#define imp(v) {for(auto i : v) cout << i << " "; cout << "\n";}
#define inp(v) {for(auto &i : v) cin >> i;}


typedef long long ll;
typedef pair<ll,ll> ii;
typedef vector<ll> vv;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef vector<string> vvs;
typedef vector<set<ll>> vst;


// const ll INF = 1e18;
// const int MOD = 1e9 + 7;


#ifdef LOCAL
#define debug(x) cerr << #x << " = " << x << endl;
#else
#define debug(x)
#endif



void solve(){
    int n; cin >> n;
    vv v(n);
    inp(v);
    vv sorted = v;
    sort(ALL(sorted));

    vv prefixv(n+1,0);  
    vv prefixsor(n+1,0);
  

    for(int i = 1; i <= n; i++){
        prefixv[i] = prefixv[i-1] + v[i-1];
        prefixsor[i] = prefixsor[i-1] + sorted[i-1];
    }

  
    int m; cin >> m;
    int r = 0, l = 0, type = 0;
    while(m--){
        cin >> type >> l >> r;
        if(type == 1){
            
            cout << prefixv[r] - prefixv[l-1] << endl;
            
        }else{      
            cout << prefixsor[r] - prefixsor[l-1] << endl;
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