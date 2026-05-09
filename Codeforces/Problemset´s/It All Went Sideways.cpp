//https://codeforces.com/contest/2227/problem/E

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
    int n; cin >> n;
    vv a(n);
    inp(a);
    int posm = 0;
    vv aux = a;
    int b = 0;
    vv ans(n,0);
    if(is_sorted(a.begin(),a.end())){
        cout << "0" << endl; 
        return void();
    } 
    for(int i = 0; i < n ; i++){
        if(i == 0){
            ans[i] = a[i];
        }else{
        ans[i] = a[i]  + ans[i - 1];
    }
}
    while(b == 0){
        for(int i = n - 1; i > 1; i--){
            aux[i] -= 1;
            if(aux[i] == 0){
            posm = i;
            b = 1;
            break;
            }

        }
    }
    
    a[posm] -= 1;
    // imp(ans);
    // cout << ans[posm - 1] << endl;
    // cout << ((a.size() - posm + 1) )<< endl;
    // cout << posm << endl;
    //  - * a[posm]) << endl;
    cout << ans[posm - 1] - (posm * a[posm]) << endl;
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