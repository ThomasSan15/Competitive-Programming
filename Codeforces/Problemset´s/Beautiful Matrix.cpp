//https://codeforces.com/problemset/problem/263/A

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
    vector<vector<int>> matrix (5,vector<int>(5));
    int val = 0;
    int onej = 0;
    int onei = 0;

    for(int i = 0; i < 5 ; i++){
        for(int j = 0; j < 5; j++){
            cin >> val ;
            if(val == 1){
                onej = j + 1;
                onei = i + 1;
            }
            matrix[i][j] = val;
        }
    }
    cout << endl;
    // for(int i = 0; i < 5 ; i++){
    //     for(int j = 0; j < 5; j++){
    //         cout << matrix[i][j]  << " ";
    //     }
    //     cout << endl;
    // }

   cout << abs(onei - 3) + abs(onej - 3) << endl;
    //cout << " i " << onei << " j " << onej << endl;
}

int main() {
    fastio

    int t = 1;
    
    while (t--) {
        solve();
    }

    return 0;
}