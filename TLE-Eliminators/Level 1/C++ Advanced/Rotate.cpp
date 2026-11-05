//https://atcoder.jp/contests/abc309/tasks/abc309_b

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
    int matriz [n][n]
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> matriz[i][j];
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
           if(i == 0 && j == 0) cout << matriz[i+1][j];
           else if(i == 1 && j == n - 1) cout << matriz[i-1] 
           else if(i == n - 1 && j == n - 1) cout << matriz[i-1][j];
           else if()
           else if(i == 0) cout << matriz[i][j-1];
          
           else if(i == n - 1)cout << matriz[i][j+1];
           else if(j == 0)cout << matriz[]



           else{
            cout << matriz[i][j];
           }
        }
        cout << endl;
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