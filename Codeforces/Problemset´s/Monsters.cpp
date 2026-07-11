//https://codeforces.com/problemset/problem/1849/B

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
    vector<pair<int,int>> a(n);
    
    for(int i = 0; i < n;i++){
        cin >> a[i].first;
        a[i].first = (a[i].first % k == 0 ? k : a[i].first % k);
        a[i].second = i+1;
    }

    sort(ALL(a), [](const pair<int,int> & v1, const pair<int,int>& v2){
        if(v1.first != v2.first)
            return v1.first > v2.first;
        return v1.second < v2.second;
    });


     for(int i = 0; i < n;i++){
        cout << a[i].second << " ";
    }
           
    cout << endl;

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