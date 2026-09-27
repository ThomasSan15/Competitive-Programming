//

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
    int n, k, c; cin >> n >> k >> c;
    vv id(n);
    vv uni(n);
    vv limit(n + 1, 0);
    vv selec(n+1,0);
    
    for(int i = 0; i < n; i++){
        cin >> id[i];
        cin >> uni[i];
    }


        for(int i = 0; i < n; i++){
            if(k == 0)break;
            if(limit[uni[i]] < c){
                limit[uni[i]]++;
                k--;
                selec[i] = 1;
            }
        }
        
         for(int i = 0; i < n; i++){
            if(k == 0)break;
            if(selec[i] == 0){
                selec[i] = 1;
                k--;
            }
        }
    
    for(int i = 0; i < n; i++){
        if(selec[i]){      
            cout << id[i] << endl;
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