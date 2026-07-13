//https://codeforces.com/problemset/problem/1791/D

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
    ll ans = 0;
    vv letters(26,0);
    vv letters2(26,0);
   
    vv prefix(n+1,0);
    vv sufix(n+1,0);

    for(int i = 0, j = n-1; i < n; i++,j--){

        !letters[s[i] - 'a'] ? prefix[i+1] = prefix[i] + 1 : prefix[i+1] = prefix[i];    
        letters[s[i]-97]++;
        
        !letters2[s[j] - 'a'] ?  sufix[j] = sufix[j+1] + 1 : sufix[j] = sufix[j+1];
        letters2[s[j]-97]++;
       
    }

    for(int i = 0; i < n+1; i++){
        ans = max(ans, prefix[i] + sufix[i]);
    }
    
    cout << ans << endl;

   
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