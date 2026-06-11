//https://codeforces.com/problemset/problem/230/B

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
    vector<bool> primes(1e6 + 1, true);
    primes[0] = false;
    primes[1] = false;

    int num = 0;
   
    
    for(int i = 2; i * i <= 1000000; i++){
    if(primes[i]){
        for(int j = i * i; j <= 1000000; j += i){
            primes[j] = false;
        }
    }
}
    for(int i = 0;i< n; i++){
        num = sqrt(a[i]);
        if(1LL * num * num == a[i] && primes[num]){
            cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
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