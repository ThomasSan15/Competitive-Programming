//https://codeforces.com/contest/2057/problem/B

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
    int n, k; cin >> n >> k;
    vector<int> a(n);
    inp(a);
    int ans = 1;

    if(n == k){
        cout << ans << endl;
    }else{
     
        map<int,int> frec;

        for(int num : a){
            frec[num]++;
        }
        
        vector<int> v;

        for(auto [c,f] : frec){
            v.push_back(f);
        }
        int count = v.size();
        sort(ALL(v));

        for(int i = 0; i < v.size(); i++){
            if(v[i] <= k){
                k -= v[i];
                v[i] = 0;
                count--;
            }else{
                break;
            }
            
        }

        cout << count << endl;

        
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