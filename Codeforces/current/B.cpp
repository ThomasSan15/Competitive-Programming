//

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
#define imp(v) {for(auto i : v) cout << i << " ";}
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
    int num = 1;
    int b = 0;
    vector<vector<int>> matriz(4,vector<int> (n));

    for(int i = 0; i < 4; i++,){
        if(i != 0 && b == 1){
            num--;
        }else if(i != 0 && b == 0){
            num++;
        }
        for(int j = 0; j < n; j++){
            matriz[i][j] = num;
            if(num == 1 && b == 1){
                b = 0;
            }
            if(num == n && b == 0){
                b = 1;
            }
            if(b == 1){
            num--;
             }else if(b == 0){
            num++;
             }
        }
    }

     for(int i = 0; i < 4; i++, num++){
        for(int j = 0; j < n; j++, num++){
             
            cout << matriz[i][j] << " ";
        }
    }
    cout << endl;
    
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