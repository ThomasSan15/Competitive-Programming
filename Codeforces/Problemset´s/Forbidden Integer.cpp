//https://codeforces.com/problemset/problem/1845/A

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
    int n, k , x; cin >> n >> k >> x;
    if(n >= k){
    if((k >= 2  && x != 1 )  || (k >= 3 && n % 2 != 0) || (k >= 2 && n % 2 == 0)){
        cout << "YES" << endl;
        vv m;
        if(x != 1){
            for(int i = 1; n != 0; ){
                n -= i;
                m.push_back(i);
            }
        }else{
            if(n % 2 == 0){
                for(int i = 2; n != 0; ){
                n -= i;
                m.push_back(i);
            }
            
        }else{
            n -= 3;
            m.push_back(3);
             for(int i = 2; n != 0; ){
                n -= i;
                m.push_back(i);
            }
        }
        
        }
        cout << m.size() << endl;
        imp(m);
    }else{
        cout << "NO" << endl;
        return void();
    }}
    else{
        cout << "NO" << endl;
        return void();
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