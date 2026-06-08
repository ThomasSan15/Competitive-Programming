//https://codeforces.com/contest/2094/problem/D

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
    string s, p;
    cin >> p >> s;
    int counts = 0, countp = 0;
    char actual = ' ';
    if(s == p){
        cout << "YES" << endl;
    }else{
        actual = p[0];
    for(int i = 0 , j = 0; i < s.size() || j < p.size();){
        //cout << " LETRA " << actual << " En p " << p[j] << " En s " << s[i] << endl;  
        if(p[j] != actual && s[i] == actual){
            i++;
            counts++;
        }else if(p[j] == actual && s[i] != actual){
            countp++;
            j++;
        }else if(p[j] == actual && s[i] == actual){
            counts++;
            countp++;
            i++;
            j++;
        }else {
           // cout << " CUENTAS " << " EN P " << countp << " EN s" << counts << endl;
            if(counts >= countp && counts <= 2*countp){
                counts = 0;
                countp = 0;
                actual = s[i];
            }else{
                cout << "NO" << endl;
                return void();
            }
        }
    }
             if(counts >= countp && counts <= 2*countp){
               cout << "YES" << endl;
            }else{
                cout << "NO" << endl;
            }
    
}
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