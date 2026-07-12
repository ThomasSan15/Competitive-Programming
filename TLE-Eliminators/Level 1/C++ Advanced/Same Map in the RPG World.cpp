//https://atcoder.jp/contests/abc300/tasks/abc300_b

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
  int r, c; cin >> r >> c;
  
  vector<vector<char>> mat (r*2, vector<char> (c));
    int count1 = 0, count2 = 0;
  for(int i = 0; i < r*2; i++){
    for(int j = 0; j < c; j++){
    if(i < r){
        cin >> mat[i][j];
        if(mat[i][j] == '#')count1++;
            }
    else{
        cin >> mat[i][j];
        if(mat[i][j] == '#')count2++;

            }
        }
    }
    cout << count1 << " " << count2 << endl;

    cout << (count1 == count2? "Yes" : "No") << endl;
}

int main() {
    fastio
    
    int t = 1;
   
    while (t--) {
       solve();
    }

    return 0;
}