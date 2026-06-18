//https://codeforces.com/problemset/problem/350/A

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
    int n, m; cin >> n >> m;

    vv a(n);
    vv b(m);
    inp(a);
    inp(b);
    
    int val = 0;
    sort(ALL(a));
    int v1 = a[n-1];
    int v2 = 0;
    int casebase = *min_element(ALL(b));
    int double_element = 1e9;

    for(int i = 0; i <n; i++){
        val = a[i];
        double_element = min(double_element, val);
     
        if(a[i] * 2 >= v1 && v2 == 0){
            v2 = a[i] * 2;
        }
    }

    //cout << v1 << " " << casebase << " " << double_element << endl;
    
    if(casebase <= v1  && casebase <= v2){
        cout << -1 << endl;
    }else{
        
       if(v2 < casebase ){
            cout << v2 << endl;
            return;
       }

       if(v1 < casebase && double_element * 2 <= v1){
        cout << v1 << endl;
        return;
       }
       
       cout << -1 << endl;
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