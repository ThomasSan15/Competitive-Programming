//https://codeforces.com/problemset/problem/1831/B

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
    vv b(n);
    inp(a);
    inp(b);
    vv counta (2*n + 1,0);
    vv countb (2*n + 1,0);
    int aux1 = 1;
    int aux2 = 1;
    int auxm = 0;
    int ans = 0;

    for(int i = 0; i < n; i++){
        if(counta[a[i]] == 0)counta[a[i]] = 1;
        if(countb[b[i]] == 0)countb[b[i]] = 1;
        if(i < n - 1 && a[i] == a[i+1])aux1++;
            else{
            auxm = counta[a[i]];
            counta[a[i]] = max(auxm, aux1);
            aux1 = 1;
         }

         if(i < n - 1 && b[i] == b[i+1])aux2++;
            else{
                auxm = countb[b[i]];
                countb[b[i]] = max(auxm,aux2);
                aux2 = 1;
            }
    }

    for(int i = 1; i <= 2*n; i++){
     //  cout << " VALOR : "<< i << " COUNT A " << counta[i] << " COUNT B " << countb[i] << endl; 
        aux1 = counta[i] + countb[i];
        ans = max(ans,aux1);
    }
    cout << ans << endl;

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