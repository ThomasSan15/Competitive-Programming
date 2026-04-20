//https://codeforces.com/problemset/problem/1890/A

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
    int count = 0;
    int count2 = 0;
    int n; cin >> n;
    vv a(n);
    inp(a);
    int v1 = a[0];
    int v2 = -1;

    if(n <= 2){
        cout << "Yes" << endl;
        return void();
    }else{
        
        for(int i = 0; i < n; i++){
             if(a[i] != v1 && v2 == -1 ){
                v2 = a[i];
                count2++;
            }
           else if(a[i] != v1 && a[i] != v2 && v2 != -1 ){
            cout << "No" << endl;
            return void();
           } else if(a[i] == v1)count++;
           else if(a[i] == v2)count2++;
    }
        if(n % 2 == 0){
        if(count2 - count == 0 || count == n ){
        cout << "Yes" << endl;
        }else{
            cout << "No" << endl;
        }
    }else{
        if(count2 == n /2 || count == n/2 || count == n ){
        cout << "Yes" << endl;
        }else{
            cout << "No" << endl;
        }
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