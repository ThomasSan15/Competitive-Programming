//https://codeforces.com/problemset/problem/1834/A

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
    int n; cin >> n;
    vv a(n);
    inp(a);
    int minusOne = 0;
    int ones = 0;
    
    int ans = 0;

    for(int i = 0; i < n; i++){
        if(a[i] == -1){
            minusOne++;
        }else{
            ones++;
        }
     
    }
  
    if(n <= 3){
        cout << minusOne << endl;
    }else{
        if(minusOne % 2 != 0){
            ans += 1;
            minusOne--;
            ones++;
        }
        if(minusOne > (n / 2)){
            if((n/2) % 2 == 0){
            ans += abs(minusOne - (n/2));
            }else{
                ans += abs(minusOne - (n/2)) + 1;
            }
        }
        cout << ans << endl;
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