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


void solve() {
    
}

int main() {
    fastio

   int n; cin >> n;
   char c; cin >> c;
   vector<string> a(n);
   for(int i = 0; i < n; i++){
         (i + 1) % 2 == 0 ? a[i][0] = 'A' : a[i][0] = 'O'; 
   } 

    for(int i = 0; i < n; i++){
        cout << a[i][0] << endl; 
   } 


    return 0;
}