//https://codeforces.com/problemset/problem/275/A

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
    vector<vector<int>> matrix(3,vector<int> (3));

     for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
           matrix[i][j] = 1;
        }
    }
 
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            int val = 0;
            cin >> val;
            if(val % 2 != 0 && val != 0){
                matrix[i][j] ^= 1;
                if(i < 2){
                    matrix[i+1][j] ^= 1;
                }
                if(i > 0){
                    matrix[i-1][j] ^= 1;
                }
                 if(j < 2){
                    matrix[i][j+1] ^= 1;                             
                }
                if(j > 0){
                    matrix[i][j-1] ^= 1;      
                }
            }
        }
    }

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
           cout << matrix[i][j] ;
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