//

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
#define imp(v) {for(auto i : v) cout << i ; cout << "\n";}
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
    stack<char> st;
    int si; int k;
    cin >> si >> k;
    string s ;
    cin >> s;
    vv ans(si);
    stack<int> inx;
    int val = 0;

    for(int i = 0; i < si; i++){
        if(!st.empty()&& st.top() == '(' && s[i] == ')' && k > 0){
            if(st.size() < 2){
            val = inx.top();
            ans[val] = 1;
            ans[i] = 0;
            st.pop();
            inx.pop();
            k--;
            }else{
                k--;
                ans[i] = 1;
            }
        }else if(s[i] == '('){
            st.push(s[i]);
            ans[i] = 0;
            inx.push(i);
        }
        
    }
    imp(ans);
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