//https://codeforces.com/problemset/problem/287/A

#include <bits/stdc++.h>
// #include <iostream>
// #include <algorithm>
// #include <complex>
// #include <map>
// #include <set>
// #include <string>
// #include <vector>
// #include <numeric>
// #include <array>
// #include <cassert>

using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
#define pb push_back
#define fst first
#define snd second
#define fore(i,a,b) for(ll i = a, jet = b; i < jet; i++)
#define ALL(x) (x).begin(), (x).end()
#define RALL(x) (x).rbegin(), (x).rend()
#define SZ(x) (int)(x).size()
#define imp(v) {for(auto i : v) cout << i << " "; cout << "\n";}
#define inp(v) {for(auto &i : v) cin >> i;}


typedef long long ll;
typedef pair<ll,ll> ii;
typedef vector<ll> vv;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef vector<string> vvs;
typedef vector<set<ll>> vst;


// const ll INF = 1e18;
// const int MOD = 1e9 + 7;


#ifdef LOCAL
#define debug(x) cerr << #x << " = " << x << endl;
#else
#define debug(x)
#endif



void solve(){
    vector<vector<char>> mt (4,vector<char> (4));
  

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            cin >> mt[i][j];
        }
    }

     for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            
                if( (j <= 2 && i > 0 && mt[i-1][j+1] == mt[i][j+1] && mt[i-1][j] == mt[i][j+1]) 
                    || (j <= 2 && i <= 2 && mt[i+1][j] == mt[i+1][j+1] && mt[i][j+1] == mt[i+1][j+1])
                    || (j > 0 && i > 0 && mt[i-1][j-1] == mt[i][j-1] && mt[i-1][j] == mt[i][j-1])
                    || (j > 0 && i <= 2 && mt[i+1][j] == mt[i+1][j-1] && mt[i][j-1] == mt[i+1][j-1])){
                    cout << "YES" << endl;
                    return;
                
            }
        }
     }
     cout << "NO" << endl;

}

int main() {
    fastio
    
    int t = 1;
    
    while (t--) {
       solve();
    }

    return 0;
}