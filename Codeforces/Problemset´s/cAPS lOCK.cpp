//https://codeforces.com/problemset/problem/131/A

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
    string s;
    cin >> s;
    string ans;
    int b = 1;
    for(int i = 0; i < s.size(); i++){
        if(i == 0 && s[0] >= 97 && s[0] <= 122){
           ans.push_back( s[0] -32);
            continue;
        }

        if(s[i] >= 65 && s[i] <= 90){
            ans.push_back(s[i] + 32);
        }else{
            b = 0;
        }
    }
    if(b){
        cout << ans << endl;
    }else{
    cout << s << endl;
    }
}

int main() {
    fastio

    int t = 1;
    
    while (t--) {
        solve();
    }

    return 0;
}