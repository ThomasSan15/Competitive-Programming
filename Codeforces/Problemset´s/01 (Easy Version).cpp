//https://codeforces.com/gym/104380/problem/A

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

void impS(stack<char> s) {
    
    stack<char> temp;
    
    while (!s.empty()) {
        temp.push(s.top());
        s.pop();
    }
    
    while (!temp.empty()) {
        cout << temp.top() ;
        temp.pop();
    }
    cout << endl;
}

void solve() {
    string s;
    stack<char> ans;
    char val = ' ';
    cin >> s;

    for(int i = 0; i < s.size(); i++){
        if(i == 0){
             val = s[i];
            ans.push(val);
        }else{
        if( !ans.empty() && ans.top() == '0' && s[i] == '1'){
            ans.pop();
        }else{
            val = s[i];
            ans.push(val);
        }
    }
    }
    cout << ans.size() << endl;
    impS(ans);

}

int main() {
    fastio

    int t = 1;

    while (t--) {
        solve();
    }

    return 0;
}