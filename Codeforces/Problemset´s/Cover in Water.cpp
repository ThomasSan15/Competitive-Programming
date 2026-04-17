//https://codeforces.com/problemset/problem/1900/A

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
    string s;
    int n; cin >> n;
    cin >> s;
    int b = 0;
    for(int i = 0; i < n-2 ; i++){
        if(s[i] == '.' && s[i + 1] == '.' && s[i + 2] == '.'  ) b = 1;
}
if(b == 1) cout << "2" << endl;
else{
    fore(i,0,n)if(s[i] == '.') b++;
    cout << b << endl;
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