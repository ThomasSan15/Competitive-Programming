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


int divisores(int a){
    int count = 0;
    for(int i = 1; i <= a; i++){
        if(a % i == 0) count++;
    }
    return count;
}

float pos(float r, float g){
    float value = (2 * r * g) / ((r+g) * (r + g -1));
    return value;
}


int main() {
    fastio

   float p, q; cin >> p >> q;
   

  
   
      for(ll r = 1; r <= 1000000; r++){
        for( ll g = r ; g <= q + 1000000 ; g++){
        if(p/q == pos(r,g)){
            cout << r << " " << g << endl;
            return 0;
        }

    }
}
   
    cout << "impossible" << endl;
   
    return 0;
}