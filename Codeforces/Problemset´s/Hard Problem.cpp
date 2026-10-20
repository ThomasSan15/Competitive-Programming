//https://codeforces.com/contest/2044/problem/C

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
    int m,a,b,c; cin >> m >> a >> b >> c;
    int seatA = m, seatB = m;
    ll ans = 0;
    if(seatA >= a){
        ans += a;
        seatA -= a;
    }else{
        ans += seatA;
        seatA = 0;
    }
    if(seatB >= b){
        ans += b;
        seatB -= b;
    }
    else{
        ans += seatB;
        seatB = 0;
    }

    if(seatA + seatB >= c){
        ans += c;
    }else{
        ans += seatA + seatB;
    }
    
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