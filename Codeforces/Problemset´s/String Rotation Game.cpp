// https://codeforces.com/problemset/problem/2192/A

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



void solve(){
    int n; cin >> n;
    int count = 0;
 
    string s; cin >> s;
    for(int i = 0; i < n ; i++){
        char c = s.at(i);  
        if(n > 1){ 
            if(i + 1 < n){
                if(i >= 1 ){
          
              if(s.at(i-1) !=  c){
                count ++;
            }

        }else{
            count++;
        }

        }else if(c != s.at(i - 1)) count++;
    }else{
            count++;
     }
  
    }

    if(s.at(0) != s.at(n-1) && count < n) count++;

    cout << count << endl;
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