//

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
    string s;
    cin >> s;
    int change = 1;

    while(change){

        change = 0;
        for(int i = 0; i < (int)s.size()-1; i++){
            if(s[i] == s[i+1]){
            //    cout << "eliminando " << s[i] << endl;
                s.erase(i,1);
                change = 1;
                break;
            }
        }
        //cout << " DESPUES DE PARES " << s << endl;
         for(int i = 0; i < (int)s.size() - 2; i++){
            if(i < (int)s.size() - 3 && s[i] == s[i+2] && s[i+2] != s[i+3]
            && s[i+1] != s[i]){
          //      cout << "eliminando" << s[i+2] << endl;
                s.erase(i,1);
                change = 1;
                break;
            }
            if(s[i] == s[i+2] && s[i] != s[i+1] ){
                s.erase(i+1,1);
                change = 1;
                break;
            }
        }    
        
         //cout << " DESPUES DE TERNAS " << s << endl;
        
       
    }
    //cout << s << endl;
    cout << s.size() << endl;
    //cout << endl;
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