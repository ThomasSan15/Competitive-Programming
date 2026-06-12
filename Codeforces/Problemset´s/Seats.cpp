//https://codeforces.com/problemset/problem/2188/B

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
    int n ; cin >> n;
    string s; cin >> s;
    int ans = 0;

    if(n == 1 || n == 2){
        cout << "1" << endl;
        return void();
    }

    for(int i = 0; i < n; i++){

        // if(i >= 2 && i < n-2 && ((s[i] == '0' && s[i-1] == '0' && s[i-2] == '1' ) ||(s[i] == '0' && s[i+1] == '0' && s[i+2] == '1'))){
        //     s[i] = '1';
        // }else if(i == 0 && s[i] == '0' && s[i+1] == '0' && s[i+2] == '1'){
        //     s[i] = '1';
        // }else if(i == n-2 && (s[i] == '0' && s[i-1] == '0' && s[i+1] == '0' )){
        //     s[i] = '1';
        // }

        if(i == 0 && s[i] == '0' && s[i+1] == '0' && s[i+2] == '1'){
            s[i] = '1';
        }else if(i == n - 1 && s[i] == '0' && s[i-1] == '0' && s[i-2] == '1'){
            s[i] = '1';
        }else if(i > 0 && i < n-1 && s[i] == '0' && s[i-1] == '0' && s[i+1] == '0'){
            s[i] = '1';
        }
        
       }
    

    fore(i,0,n)if(s[i] == '1')ans++;

    cout << ans << endl;
  //  cout << s << endl;

    
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