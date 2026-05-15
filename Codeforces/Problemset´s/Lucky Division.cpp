//https://codeforces.com/problemset/problem/122/A

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

int lucky(int n){
    int l = 0;
    while(n > 0){
        l = n % 10;
        if(l != 7  && l != 4){
            return 0;
        }else{
            n /= 10;
        }
        
    }
    return 1;
}
void solve() {
    int n; cin >> n;
    if(lucky(n) || n % 4 == 0 || n % 7 == 0 || n % 47 == 0 || n % 74 == 0 ){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
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