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

// const ll INF = 1e18;
// const int MOD = 1e9 + 7;

#ifdef LOCAL
#define debug(x) cerr << #x << " = " << x << endl;
#else
#define debug(x)
#endif

int techo(int a, int b){
    return (a + b - 1) / b;
}
void solve() {
    ll n = 0;
    cin >> n;
    ll ng = 1;
    ll cp = 0;

    for ( ll i = 1 ; i < n ; ){
        if ( i + ng > n ) {
        
            cp++;  
            i++;
        }else  {
        i+=ng;
        ng++;
        cp=0;
    }
}
    
    if ( cp == 0 ) {

    cout << ng << endl;
    }else{
    ll div = __gcd(cp , ng);
    if ( cp % div == 0) {
       cout << ng << " " << cp/div << "/" << ng/div << endl; 
    } else {
    cout << ng << " " << cp << "/" << ng << endl;
    }

}

}

int main() {
    fastio
    int t = 1;
    while(t--){
        solve();
    }
 
}