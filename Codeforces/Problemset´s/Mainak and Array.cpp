//https://codeforces.com/problemset/problem/1726/A

#include <bits/stdc++.h>
// #include <iostream>
// #include <algorithm>
// #include <complex>
// #include <map>
// #include <set>
// #include <string>
// #include <vector>
// #include <numeric>
// #include <array>
// #include <cassert>

using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
#define pb push_back
#define fst first
#define snd second
#define fore(i,a,b) for(ll i = a, jet = b; i < jet; i++)
#define ALL(x) (x).begin(), (x).end()
#define RALL(x) (x).rbegin(), (x).rend()
#define SZ(x) (int)(x).size()
#define imp(v) {for(auto i : v) cout << i << " "; cout << "\n";}
#define inp(v) {for(auto &i : v) cin >> i;}


typedef long long ll;
typedef pair<ll,ll> ii;
typedef vector<ll> vv;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef vector<string> vvs;
typedef vector<set<ll>> vst;


// const ll INF = 1e18;
// const int MOD = 1e9 + 7;


#ifdef LOCAL
#define debug(x) cerr << #x << " = " << x << endl;
#else
#define debug(x)
#endif



void solve(){
    int n; cin >> n;
    vector<int> a(n);
    inp(a);

    int ans1 = 0;
    int ans2 = 0;
    int ans3 = 0;
    int ans4 = 0;

    for(int i = 0; i < n-1; i++){
       ans1 = max(ans1, a[n-1] - a[i]);
    }

     for(int i = 1; i < n; i++){
        ans2 = max(ans2, a[i] - a[0]);
    }

    ans3 = a[n-1] - a[0];

    for(int i = 0; i < n; i++){
        i == 0? ans4 = a[n-1] - a[i] : ans4 = max(ans4, a[i-1] - a[i]);
    }


    cout << max(max(ans1,ans2), max(ans3,ans4)) << endl;
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