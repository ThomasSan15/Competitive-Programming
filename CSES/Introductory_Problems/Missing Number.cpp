//https://cses.fi/problemset/task/1083

#include <bits/stdc++.h>
#include <algorithm>
#include <complex>
#include <map>
#include <set>
#include <string>
#include <vector>
#include <numeric>
#include <array>
#include <cassert>

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

// const ll INF = 1e18;
// const int MOD = 1e9 + 7;

#ifdef LOCAL
#define debug(x) cerr << #x << " = " << x << endl;
#else
#define debug(x)
#endif


void solve() {
    
}

int main() {
    fastio

    ll n = 1;
    cin >> n;
    vv a(n-1);
    inp(a);
    ll num = -1;
    sort(a.begin(),a.end());
    for(ll i = 0, x = 1; i < n - 1; i++, x++){
        if(a.at(i) != x){
            num = x;
            break;
        }
    } 
    if(num == -1) num = n;
    cout << num << endl;
    return 0;
}