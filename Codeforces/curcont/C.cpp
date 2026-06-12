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
    ll a, b, x; cin >> a >> b >> x;

    ll ans2 = INT_MAX;
    ll aux = 0;
    vector<pair<int,int>> ansa ;
    vector<pair<int,int>> ansb ;

     
        ansa.pb({a,aux});
        ansb.pb({b,aux});
        while(a > 0){
            a = floor(a/x);
            aux++;
            ansa.pb({a,aux});
            if(a == 0){
                break;
            }
        }   
        aux = 0;
        while(b > 0){
            b = floor(b/x);
            aux++;
            ansb.pb({b,aux});
            if(b == 0){
                break;
            }
        }
        
        // for(int i = 0; i < ansa.size(); i++){
        //     cout << "{" << ansa[i].first << "," <<ansa[i].second << "}" << endl;
        // }

        //  for(int i = 0; i < ansb.size(); i++){
        //     cout << "{" << ansb[i].first << "," <<ansb[i].second << "}" << endl;
        // }

        ll val = 0;
        for(int i = 0; i < ansa.size(); i++){
            for(int j = 0; j < ansb.size(); j++){
                    val = ansa[i].second + ansb[j].second + abs(ansa[i].first - ansb[j].first);
                    ans2 = min(ans2,val);
            }
        }

        cout << ans2 << endl;
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