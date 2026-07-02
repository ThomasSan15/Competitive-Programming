//https://codeforces.com/contest/1873/problem/E

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

int cost(ll mid, ll x, vv &a){
    ll ans = 0;
    for(int i = 0; i < a.size();i++){
        if(mid > a[i]){
        ans += mid - a[i];
        }
        if(ans > x)return 1;
    }
    return 0;
}

void solve(){
    ll n, x; cin >> n >> x;
    vv a(n);
    inp(a);
    sort(ALL(a));
    ll low = 1, high = a[n-1]+x; 
    ll mid = 0;

    while(low <= high){
        mid = low + (high - low) / 2;

    if(cost(mid,x,a)){
            high = mid - 1;
        }else{
            low = mid + 1;
        }
    }
    cout << high << endl;
    
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