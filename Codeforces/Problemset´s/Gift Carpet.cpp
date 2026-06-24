//https://codeforces.com/contest/1862/problem/A

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

    stack<char> st;
    vector<string> ans (n);
    
    for(int i = 0; i < n; i++){
        cin >> ans[i];
    }   
    
  
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            
            if(ans[j][i] == 'v' && st.empty()){
                st.push('v');
            }else
            if(ans[j][i] == 'i' && st.empty() && st.top() == 'v'){
                st.push('i');
             
            }else
            if(ans[j][i] == 'k' && st.empty() && st.top() == 'i'){
                st.push('k');
                
            }else
            if(ans[j][i] == 'a' && st.empty() && st.top() == 'k'){
                st.push('a');
                 
            }
          
            
        }
    }
   
    
    
    
    if(st.size() == 4 || n == 1){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
    return void();

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