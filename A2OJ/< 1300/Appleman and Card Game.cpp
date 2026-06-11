//https://codeforces.com/problemset/problem/462/B

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
 int n, k; cin >> n >> k;
 vector<char> a(n);
 inp(a);
 sort(ALL(a));
    vv letters(26,0);
    ll ans = 0;
 
    for(int i = 0; i < n; i++){
        letters[a[i] - 65]++;
    }
    sort(letters.rbegin(),letters.rend());
  

    for(int i = 0; i < 26 && k > 0; i++){
        if(k - letters[i] >= 0){
            ans+= 1LL * letters[i] * letters[i];
            k -= letters[i];
        }else{
            ans +=  1LL * k * k;
            k = 0;
        }
        
    }

    cout << ans << endl;
}

int main() {
    fastio

    int t = 1;
  
    while (t--) {
        solve();
    }

    return 0;
}