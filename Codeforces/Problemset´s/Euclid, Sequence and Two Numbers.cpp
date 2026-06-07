//https://codeforces.com/contest/2234/problem/A

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
    sort(a.rbegin(), a.rend());
    int x,y;
    if(n == 2){
        cout << a[0] << " " << a[1] << endl;
        return void();
    }else{
 
    for(int i = 0; i < n - 1; i++){
        if(i < n-2){
        if( a[i] % a[i + 1] == a[i + 2]){
            
            x= a[0]; 
            y = a[1];
        }else{
            cout << -1 << endl;
            return void();
        }
    }else{
        break;
    }
    }
 
    cout << x << " " << y << endl;
}}
 
int main() {
    fastio
 
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
 
    return 0;
}