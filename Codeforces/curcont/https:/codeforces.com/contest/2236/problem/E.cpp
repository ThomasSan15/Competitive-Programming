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
    int n; cin >> n;
    vv a(n);
    inp(a);
    int count1 = 0;
    int count2 = 0;
    if(n < 2){
        cout << 0 << endl;
    }else{
    for(int i = 0; i < n / 2; i++){
        if( i < n/2 - 1 && a[i] > a[i + 1]){
            count1++;
        }
        if(i == n/2 - 1 && a[i] < a[i-1]){
            count1++;
        }
    }
    for(int i = n / 2; i < n; i++){
     if( i < n - 1 && a[i] > a[i + 1]){
            count2++;
        }
        if(i == n-1 && a[i] < a[i-1]){
            count2++;
        }
    }
    if(count1 == 0 || count2 == 0){
        cout << 1 << endl;
    }else{
    cout << min(count1,count2) << endl;
}
    }
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