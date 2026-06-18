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


void solve() {
    string st;
    string end;
    getline(cin,st);
    getline(cin,end);
    int ans = 0;
    int hour1 = 0, hour2 = 0;
    hour1 = stoi(st.substr(0,2)) * 60 + stoi(st.substr(3,2));
    hour2 = stoi(end.substr(0,2)) * 60 + stoi(end.substr(3,2));
   
    ans = (hour2 - hour1)/2;

    if((hour1 + ans) / 60 < 10 && (hour1 + ans) % 60 < 10){
        cout << "0" <<(hour1 + ans) / 60 << ":" << "0" << (hour1 + ans)%60 << endl;
    }else if((hour1 + ans) / 60 < 10){
         cout << "0" <<(hour1 + ans) / 60 << ":" << (hour1 + ans)%60 << endl;
    }else if((hour1 + ans) % 60 < 10){
         cout << (hour1 + ans) / 60 << ":" << "0" << (hour1 + ans)%60 << endl;
    }else{
    cout << (hour1 + ans) / 60 << ":" << (hour1 + ans)%60 << endl;
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