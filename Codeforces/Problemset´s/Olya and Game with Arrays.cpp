//https://codeforces.com/problemset/problem/1859/B

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
    vector<deque<ll>> vcts (n);
    int m = 0;
    ll ans = 0;
    ll mn = LLONG_MAX;
    ll index = -1;

    for(int i = 0; i < n ; i++){
        cin >> m;
        vcts[i].resize(m);

        for(int j = 0; j < m; j++){
            cin >> vcts[i][j];
        }
    }

    for(auto &v : vcts){
        sort(ALL(v));
    }

    for(int i = 0; i < n; i++){
        if(mn > vcts[i][1]){
            mn = vcts[i][1];
            index = i;
        }
    }



    for(int i = 0; i < n ; i++){
            if( i != index){
             ans += vcts[i][1]; 
             mn = min(mn, vcts[i][0]);
            vcts[index].push_back(vcts[i][0]);
            vcts[i].pop_front();
            }
    }


    mn = min(mn,vcts[index][0]);
  
    // for(int i = 0; i < n ; i++){
    //     for(int j = 0; j < vcts[i].size(); j++){
    //         cout << vcts[i][j] << " ";
    //     }
    //     cout << endl;
    // }
   
    // cout << index << endl;
   // cout << mn << endl;
    cout << ans + mn << endl;

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