//https://codeforces.com/problemset/problem/2185/C

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
  int consecutive = 1;
  int aux = 1;
  int b =  INT_MAX;
   sort(a.begin(),a.end());
    for(int i = 0; i < n - 1; i++){
        if(b == a[i + 1]){
            continue;
        }else if(a[i + 1] == a[i] + 1  ){
            aux++;
            b = a[i + 1];
        }else{
            
            consecutive = max(consecutive,aux);
            aux = 1;
        }
    }
      consecutive = max(consecutive,aux);
    cout << consecutive << endl;
  

  
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