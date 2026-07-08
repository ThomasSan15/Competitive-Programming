//https://codeforces.com/problemset/problem/1807/D

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
    int n, q; cin >> n >> q;
    int r = 0, l = 0 , k = 0;
    vv a(n);
    inp(a);

    vv prefix(n+1,0);

    for(int i = 1; i <= n; i++ ){
        prefix[i] = prefix[i-1] + a[i-1];
    }

    while(q--){
        cin >> l >> r >> k;

        //  cout << " PREFIX HASTA L " << prefix[l-1] << endl;
        //   cout << " PREFIX DESDE R HASTA N " <<  prefix[n] - prefix[r] << endl;
        //   cout << " SUMA DE K " << k * (r-l + 1)  << endl;
        //   cout << " SUMA TOTAL " << prefix[l-1] + prefix[n] - prefix[r] + k * (r-l + 1) << endl;
         if(((prefix[l-1] + prefix[n] - prefix[r] + k * (r-l + 1))  % 2) != 0){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }


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