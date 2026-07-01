//https://codeforces.com/problemset/problem/1783/A

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
    vv a(n);
    inp(a);

    vv aux = a;
    vv ans;
    vv prefix(n+1,0);
    int f = 0;
    for(int i = 1; i <= n; i++){
        prefix[i] = prefix[i-1] + a[i-1];
        if( i < n && a[i] == prefix[i]){
            f = 1;
        }
    }
    if(!f){
        cout << "YES" << endl;
        imp(a);
       
    }else{
    sort(ALL(aux));
    ans.pb(aux[0]);
    sort(RALL(aux));
 
    
    for(int i = 0; i < n -1; i++){
        ans.pb(aux[i]);
    }

    if(ans == a){
        cout << "NO" << endl;
    }else{
        cout << "YES" << endl;
        imp(ans);
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