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

int maxdigit(const string& s){
    int ans = 0;
    for(char c : s){
        ans = max(ans, c - '0');
    }
    return ans;
}
void solve() {
    string s; cin >> s;
    ll denom = 1LL * (s.size() * (s.size() + 1)) / 2;
    string aux;
    ll numerator = 0;
    for(int i = 0; i < s.size(); i++){
        for(int j = i; j < s.size(); j++){
            aux += s[j];
            numerator += maxdigit(aux);
        }
        aux.clear();
       
    }
    if((int)numerator % (int)denom == 0){
         cout << numerator / denom << endl;
    }else if((numerator / denom) < 1){
         ll g  = gcd(numerator,denom);
        numerator /= g;
        denom /= g;
        cout << numerator << "/" << denom << endl;

    }else{
        ll g  = gcd(numerator,denom);
        numerator /= g;
        denom /= g;

        cout << (int)numerator / (int)denom << " " << (int)numerator % (int)denom << "/" << denom << endl;
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