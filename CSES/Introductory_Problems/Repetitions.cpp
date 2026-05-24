//https://cses.fi/problemset/task/1069
 
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
 
 
 
int countA(string a){
    ll count = 0;
    ll b = 0;
    ll mx = 0;
    for(ll i = 0; i < a.size()  ; i++){
         if(i < a.size() - 1 && a[i] == 'A' && b == 0 && a[i + 1] == 'A') {
            count++;
            b = 1;
            }
         else if(a[i] == 'A' && b != 0) count++;
         else if(a[i] != 'A'){
          b = 0;
          mx = max(mx,count);
          count = 0;
    } 
    }
     mx = max(mx,count);
    if(mx == 0 && a.size() > 0){
        return 1;
    }
return mx;
}
 
int countC(string a){
    ll count = 0;
    ll b = 0;
    ll mx  = 0;
    for(ll i = 0; i < a.size()  ; i++){
         if(i < a.size() - 1 && a[i] == 'C' && b == 0 && a[i + 1] == 'C') {
            count++;
            b = 1;
            }
         else if(a[i] == 'C' && b != 0) count++;
         else if(a[i] != 'C'){
          b = 0;
          mx = max(mx,count);
          count = 0;
    } 
    }
     mx = max(mx,count);
     if(mx == 0 && a.size() > 0){
        return 1;
    }
return mx;
}
 
int countG(string a){
    ll count = 0;
    ll b = 0;
    ll mx = 0;
    for(ll i = 0; i < a.size()  ; i++){
         if(i < a.size() - 1 && a[i] == 'G' && b == 0 && a[i + 1] == 'G') {
            count++;
            b = 1;
            }
         else if(a[i] == 'G' && b != 0) count++;
         else if(a[i] != 'G'){
          b = 0;
          mx = max(mx,count);
          count = 0;
    } 
}
 mx = max(mx,count);
     if(mx == 0 && a.size() > 0){
        return 1;
    }
return mx;
}
 
int countT(string a){
    ll count = 0;
    ll b = 0;
    ll mx = 0;
    for(ll i = 0; i < a.size()  ; i++){
         if(i < a.size() - 1 && a[i] == 'T' && b == 0 && a[i + 1] == 'T') {
            count++;
            b = 1;
            }
         else if(a[i] == 'T' && b != 0) count++;
         else if(a[i] != 'T'){
          b = 0;
          mx = max(mx,count);
          count = 0;
    }
}
 mx = max(mx,count);
     if(mx == 0 && a.size() > 0){
        return 1;
    }
return mx;
}
 

 
int main() {
    fastio
 
    // int t = 1;
    // cin >> t;
    // while (t--) {
    //     solve();
    // }
    string a;
    cin >> a;
    ll ans = max(max(countA(a),countT(a)),max(countG(a),countC(a)));
    cout << ans  << endl;
 
    return 0;
}