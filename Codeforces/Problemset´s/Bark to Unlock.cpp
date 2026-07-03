//https://codeforces.com/group/OUsGcQpRLb/contest/701998/problem/A

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
    string passw; cin >> passw;

    int n; cin >> n;
    int l1 = 0, l2 = 0;
     string aux;
    while(n--){
        cin >> aux;
        if(aux[1] == passw[0])l1 = 1;
        if(aux[0] == passw[1])l2 = 1;
        if(aux == passw){
            cout << "YES" << endl;
            return;
        }

    }
    
    cout << (l1 && l2 ? "YES" : "NO") << endl;
  
}

int main() {
    fastio
    
    int t = 1;
   
    while (t--) {
       solve();
    }

    return 0;
}