//https://codeforces.com/problemset/problem/451/B

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
    int n; cin >> n;
    vv a(n);
    inp(a);
    vv ans(n);
    vv aux;
    int l = 0;
    int r = 0;
    int p = 0;

    for(int i = 0; i < n; i++){
       if(( (i < n - 1) && a[i] > a[i+1]) ){
        if(p == 0){
            l = i;
        }
            aux.pb(a[i]);
            p = 1;
       }else{ 
            if(p == 1){
                aux.pb(a[i]);
                r = i;
                break;
            }
         
       }
    }
    
    if(aux.size() == 0){
        cout << "yes" << endl;
        cout << 1 << " " << 1<< endl;
        return;
    }
    sort(aux.begin(), aux.end());
   
    for(int i = 0 ; i < n; i++){
        if(i == l){
            for(int j = 0; j < aux.size(); j++){
                ans[i] = aux[j];
                i++;
            }
            i--;
            
        }else{
            ans[i] = a[i];
        }
    }
    
    if(is_sorted(ans.begin(),ans.end())){
        cout << "yes" << endl;
        cout << l+1 << " " << r + 1<< endl;
    }else{
        cout << "no" << endl;
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