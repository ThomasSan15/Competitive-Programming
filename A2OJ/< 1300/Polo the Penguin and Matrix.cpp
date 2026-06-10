//https://codeforces.com/contest/289/problem/B

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
    int n,m,d;
    cin >> n >> m >> d;
    vv a(n*m);
    inp(a);

        int aux = 0;
        int ans = INT_MAX;
        for(int i = 0; i < n*m; i++){
            for(int j = 0; j < n*m; j++){
                if(j != i){
                 
                    if(abs(a[i] - a[j]) % d == 0){
                    aux += abs(a[i] - a[j]) / d;
                }else{
                    cout << "-1" << endl;
                    return;
                }
            }
        }
        ans = min(ans, aux);
        aux = 0;
        }
        cout << ans << endl;
    
}

int main() {
    fastio

    int t = 1;

    while (t--) {
        solve();
    }

    return 0;
}