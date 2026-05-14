//https://codeforces.com/problemset/problem/318/A

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
    
    list<int> a;

    //Matematicamente como se sabe el i-esimo numero organizandose de impart
    //a par 
    for(int i = 1; i <= n; i++){
        if(i % 2 != 0){
            a.push_front(i);
        }else{
            a.push_back(i);
        }
    }

    if(n % 2 == 0){
        if(k <= n / 2){
            auto value = next(a.begin(), n / 2 - k ) ;
            cout <<  *value << endl;
        }else{
        auto value = next(a.begin(), k - 1 ) ;
            cout <<  *value << endl;
        }
    }else{
        if(k <= n / 2){
            auto value = next(a.begin(), n / 2 - k + 1) ;
            cout <<  *value << endl;
        }else{
        auto value = next(a.begin(), k - 1 ) ;
            cout <<  *value << endl;
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