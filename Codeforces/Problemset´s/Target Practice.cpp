//https://codeforces.com/problemset/problem/1873/C

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

//const ll INF = 1e18;
//const int MOD = 1e9 + 7;

#ifdef LOCAL
#define debug(x) cerr << #x << " = " << x << endl;
#else
#define debug(x)
#endif


void solve() {
    char matrix[10][10];
    int result = 0;
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            cin >> matrix[i][j];
        }
    }

    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            if((j ==0 || j == 9 || i == 0 || i == 9) && matrix[i][j] == 'X' ){
                result += 1;
            }
            if((j == 1 || j == 8) && (i >= 1 && i <= 8) && matrix[i][j] == 'X' ){
                result += 2;
            }
            if((j == 2 || j == 7) && (i >= 2 || i <= 7) && matrix[i][j] == 'X' ){
                result += 3;
            }
            if((j ==3 || j == 6 || i == 3 || i == 6) && matrix[i][j] == 'X' ){
                result += 4;
            }
            if((j ==4 || j == 5 || i == 4 || i == 5) && matrix[i][j] == 'X' ){
                result += 5;
            }
        }
    }

    cout << result << endl;

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