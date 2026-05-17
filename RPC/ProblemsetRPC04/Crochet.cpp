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
    string wi;
    string we;
    
    int hi = 0;
    int mi = 0;
    int hd = 0;
    int md = 0;
    getline(cin,wi);
    getline(cin,we);

  
    auto pos = wi.find(':');
    cout << pos << endl;
    cout << wi << endl;
    hi = stoi(wi.substr(pos-2,2));
    mi = stoi(wi.substr(pos+1, 2));
    hd = stoi(we.substr(pos-2,2));
    md = stoi(we.substr(pos+1, 2));

    vector<string> dias = {"Mon","Tue","Wed","Thu","Fri","Sat","Sun"};
    

    
   

}

int main() {
    fastio

    int t = 1;
    
    while (t--) {
        solve();
    }

    return 0;
}