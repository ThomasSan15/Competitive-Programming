//https://codeforces.com/problemset/problem/353/A

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
    vv left(n); vv right(n);
    int odd1 = 0, odd2 = 0;
    int impossible = 0;

    fore(i,0,n){
        cin >> left[i] >> right[i];
        if(left[i] % 2 != 0 && right[i] % 2 != 0)impossible++;
        else{
        if(left[i] % 2 != 0)odd1++;
        if(right[i] % 2 != 0)odd2++;
        }
    }

    if(impossible % 2 != 0 ){
        if(odd1 % 2 != 0 && odd2 % 2 != 0){
            cout << 0 << endl;
        }else if((odd1 > 0 || odd2 > 0) && odd1 % 2 == 0  && odd2 % 2 == 0){
            cout << 1 << endl;
        }else{
            cout << -1 << endl;
        }
    }else {
         if(odd1 % 2 == 0 && odd2 % 2 == 0){
            cout << 0 << endl;
        }else if(odd1 % 2 != 0  && odd2 % 2 != 0){
            cout << 1 << endl;
        }else{
            cout << -1 << endl;
        }
    }

}

int main() {
    fastio
    
    int t = 1;
    
    while (t--) {
       solve();
    }

    return 0;
}