//https://codeforces.com/problemset/problem/1903/A

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

int nonD(vv a){
    for(int i : a){
        if( i < a.size() - 1 && a[i] > a[i + 1] ) return 0;
    }
    return 1;
}


void solve() {
    int n , k; cin >> n >> k ;
    vv a(n);
    inp(a);
    vv c = a;
    sort(c.begin(), c.end());

    if(is_sorted(c.begin(), c.end()) && k > 1){
        cout << "YES" << endl;
    }else{
        if(k >= 2){
         while(!is_sorted(a.begin(), a.end()) && k != 0){
            
            for(int i = 0; i < a.size() - 1; i++){
                if(a.at(i) > a.at(i + 1)){
                    swap(a[i], a[i + 1]);
                    k--;
                }
            }
        }
    }
    if(is_sorted(a.begin(), a.end())){
        cout << "YES" << endl;
    }
        else{
            cout << "NO" << endl;
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