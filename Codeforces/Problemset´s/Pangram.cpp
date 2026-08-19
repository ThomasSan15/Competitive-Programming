//https://codeforces.com/problemset/problem/520/A

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
    int n; cin >> n;
    string s; cin >> s;

    if(n < 26){
        cout << "NO" << endl;
        return;
    }else{
        vv used(26,0);
        int ans = 26;

        fore(i,0,n){
            if(s[i] < 'a'){
                if(!used[s[i] - 'A']){
                    used[s[i] - 'A']++;
                    ans--;
                }
            }else{
                if(!used[s[i] - 'a']){
                    used[s[i] - 'a']++;
                    ans--;
                }
            }
        }
        
        cout << (ans ? "NO": "YES") << endl;
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