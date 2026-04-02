//https://codeforces.com/problemset/problem/2192/B

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

const ll INF = 1e18;
const int MOD = 1e9 + 7;

#ifdef LOCAL
#define debug(x) cerr << #x << " = " << x << endl;
#else
#define debug(x)
#endif



void solve() {
    
}

int main() {
    fastio

    int t = 1;
    cin >> t;

    while (t--) {
        ll n; cin >> n;
        string s; cin >> s;
        vv pos[2];

            fore(i,0,n)pos[s[i] - '0'].pb(i);
            if(SZ(pos[0] ) & 1){
                cout << SZ(pos[0]) << endl;
                for(auto i: pos[0]) cout << i + 1 << " " ;;
                 cout << endl;
            }
            else if(SZ(pos[1]) % 2 == 0){
                cout << SZ(pos[1]) << endl;
                 for(auto i: pos[1]) cout << i + 1 << " ";;
                  cout << endl;
            }
            else cout << "-1" << endl;
        }


    return 0;
}