//https://codeforces.com/gym/106539/problem/B

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
    int n, m = 0; cin >> n >> m;
    vector<int> a(n);
    for(int i = 0; i < m; i++){
        cin >> a[i];
    }
    int val = 0;
    int ans = 0;
    ans = a[0];
   // cout << "valor final " << a[m - 1] << " valor penu " << a[m - 2] << endl; 
    for(int i = 1; i < n; i++){
       // cout << i << endl;
        if(i  >= m){
            
            val = a[i - 1] ^ a[i-2];
           
            a[i] = val;
        }

        ans ^= a[i] ;

    }
    //imp(a);
    a.clear();
    cout << ans << endl;

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