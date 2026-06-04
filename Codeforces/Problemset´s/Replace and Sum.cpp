//https://codeforces.com/problemset/problem/2193/C

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
    int n, q; cin >> n >> q;

    vv a(n);
    vv b(n);
    vv prefixSum(n);
    vector<pair<int,int>> query;

    int val1 = 0;
    int val2 = 0;
    int maxn = INT_MIN; 

    inp(a);
    inp(b);

    

    while(q--){
        cin >> val1 >> val2;
        query.push_back({val1,val2});
    }

    for(int i = n - 1; i >= 0; i--){
        if(i < n - 1){
             val1 = a[i];
             val2 = b[i];
             maxn = a[i+1];
         a[i] = max(max(val1,val2), maxn);
        }else{
            val1 = a[i];
            val2 = b[i];
         a[i] = max(val1,val2);
        }
    }


    for(int i = 0; i < n; i++){
        if(i == 0){
            prefixSum.at(i) = a.at(i);
        }else{
        prefixSum.at(i) = a.at(i) + prefixSum.at(i-1);
        }
    }

    
    for(int i = 0; i < query.size(); i++){
        if((query[i].first - 1) > 0 ){
            cout << prefixSum[query[i].second - 1] - prefixSum[query[i].first - 2]  << " ";
        }else{
        cout << prefixSum[query[i].second - 1] << " ";
        } 
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