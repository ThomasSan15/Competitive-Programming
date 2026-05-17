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
    int n = 0; cin >> n;
    string f;
    int num = 0;
    while(n--){ 
    cin >> f;
    for(char c: f){
        if(c != '.'){
            num += c - '0';
        }
    }
   
    if(num % 3 == 0 || num % 3 == 1){
        cout << "VALID" << endl;
    }else{
        cout << "IMPOSSIBLE" << endl;
    }
    num = 0;
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