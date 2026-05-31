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
    int val = 0;
    
    set<int> st;
    
    for(int i = 0; i < n; i++){
        cin >> val;
        if(st.contains(val)){
            cout << "-1" << endl;
            return void();
        }else{
            st.insert(val);
        }
    }
    val = 0;
    int ans = *st.begin();
    while(true){
    
     for(auto it = next(st.begin()); it != st.end(); it++){
        ans = (ans ^ (*it + val));
     }
     if(ans == 0){
        cout << val << endl;
        return void();
     }else{
    val++;
    ans = (*st.begin() + val);
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