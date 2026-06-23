//https://codeforces.com/gym/105427/problem/C

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
    string s;
    cin >> s;
    unordered_map<char,int> letters = {
        {'I',1},
        {'V',5},
        {'X',10},
        {'L',50},
         {'C',100},
        {'D',500},
         {'M',1000}
    };

    ll ans = letters[s[s.size()-1]];
    ll mx = letters[s[s.size()-1]];
    for(int i = s.size() - 2; i >= 0; i-- ){
        
        if( letters[s[i]] >= mx ){
                ans += letters[s[i]];
                mx = letters[s[i]];
             //   cout << " ANS " << ans << " MX " << mx << endl;
        }else{
            ans -= letters[s[i]];
        }
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