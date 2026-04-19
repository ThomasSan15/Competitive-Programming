//https://codeforces.com/problemset/problem/1800/A

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
    int n; cin >> n;
    string s;
    cin >> s;
    transform(s.begin(), s.end(), s.begin(),
                   [](unsigned char c){ return tolower(c); });
    
    if(n >= 4){
    fore(i,0,n - 1){
     if(s.at(i) != 'm' && s.at(i) != 'e' && s.at(i) != 'o' && s.at(i) != 'w' ){
        cout << "NO" << endl; return void();
     }else if(s.at(0) != 'm'   ||  s.at(n - 1) != 'w'){
          cout << "NO" << endl; return void();
     }else if(s.at(i) == 'm' && (s.at(i + 1) != 'm' && (s.at(i + 1) != 'e'))){
         cout << "NO" << endl; return void();    
     }else if(s.at(i) == 'e' && (s.at(i + 1) != 'e' && (s.at(i + 1) != 'o'))){
         cout << "NO" << endl; return void();    
     }else if(s.at(i) == 'o' && (s.at(i + 1) != 'o' && (s.at(i + 1) != 'w'))){
         cout << "NO" << endl; return void();    
     }else if(s.at(i) == 'w' && (s.at(i + 1) != 'w')){
         cout << "NO" << endl; return void();    
     }
    }
}else{
    cout << "NO" << endl; return void();
}
    cout << "YES" << endl;
    
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