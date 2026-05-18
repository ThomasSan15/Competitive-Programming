//https://atcoder.jp/contests/abc263/tasks/abc263_a

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
    int a,b,c,d,e; cin >> a >> b >> c >> d >> e;
    vv ans(14,0);
    int count = 0;
    ans[a] += 1;
     ans[b] += 1;
    ans[c] += 1;  
     ans[d] += 1;
      ans[e] += 1;
    int sum1 = ans[a];
    int sum2 = 0;

      for(int i = 0; i < 14; i++){
            if(ans[i] != 0){
             count++;
             if(sum1 != ans[i]){
                sum2 = ans[i];
             }
      }
    }
      if(count == 2 && ((sum2 == 3 && sum1 == 2) ||(sum2 == 2 && sum1 ==3))){
        cout << "Yes" << endl;
      }else{
        cout << "No" << endl;
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