//https://codeforces.com/problemset/problem/1971/C

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

    vv ans(13,0);
    int a,b,c,d; cin >> a >> b >> c >> d;
    ans[a] = 1;
    ans[b] = 1;
    ans[c] = 2;
    ans[d] = 2;
    int count = 0;
    if( a < b){
    for(int i = a; i < b; i++){
        if(ans[i] == 2){
            count++;
        }
    }
}else{
    for(int i = b; i < a; i++){
        if(ans[i] == 2){
            count++;
        }
    }

}
    if(count == 2 || count == 0){
        cout << "NO" << endl;
    }else{
    cout << "YES" << endl;
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