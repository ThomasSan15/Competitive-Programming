//https://codeforces.com/contest/2234/problem/B

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

int palin(string s){
    for(int i = 0, j = s.size() - 1; i< s.size() ; i++, j--){
        if(s[i] != s[j])return 0;
    }
    return 1;
}

void solve() {
    ll n ; cin >> n;
    ll x = 12; ll y = 0; 
    
        if(n % 12 == 0){
            cout << 0 << " " << n << endl;
        }else if(palin(to_string(n)) == 1){
            cout << n << " " << 0 << endl;
        }else{
            ll i = n / 12;
            while(i >= 0){
                if(palin(to_string(n-x)) == 1){
                    y = n - x;
                    break;
                }
                x = 12 * i;
                i--; 
            }
            if(y + x == n){
            cout << y << " " << x << endl;
        }else{
            cout << -1 << endl;
        }}
    
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