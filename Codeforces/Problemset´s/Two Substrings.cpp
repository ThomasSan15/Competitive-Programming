//https://codeforces.com/problemset/problem/550/A

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
    string s; cin >> s;
    int AB = 0;
    int BA = 0;
    int operation = 0;
    
    for(int i = 0; i < s.size() ;i++){
        if(operation == 0 && ((i < s.size() - 2 && s[i] == 'A' && s[i+1] == 'B' && s[i+2] == 'A') || (i < s.size() - 2 && s[i] == 'B' && s[i+1] == 'A' && s[i+2] == 'B') )){
            AB++;
            BA++;
            operation = 1;
            i +=2;
        }else if(i < s.size() - 1 && s[i] == 'A' && s[i+1] == 'B'){
            AB++;
        }else if(i < s.size() - 1 && s[i] == 'B' && s[i+1] == 'A'){
            BA++;
        }

        if(AB && BA && !operation){
            cout << "YES" << endl;
            return;
        }
        if((AB >= 1 && BA > 1 && operation == 1) ||(AB > 1 && BA >= 1 && operation == 1)){
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
}

int main() {
    fastio
    
    int t = 1;
    
    while (t--) {
       solve();
    }

    return 0;
}