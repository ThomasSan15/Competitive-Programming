//https://codeforces.com/contest/2229/problem/C1

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
    int n; cin >> n;
    vv a(n);
    inp(a);
    vv ans;
    int p = 0;
    for(int i = 0; i < n-1 ; i++){
        if(( i < n - 2 && a[i] < 0 && a[i+1] > 0 && a[i+2] < 0 )|| (i == n-2 && a[i] < 0 && a[i+1] > 0)){
            ans.push_back(i+1);
            ans.push_back(i+2);
            i++;
        }else if(i < n - 2 && a[i] < 0 && a[i+1] > 0 && a[i+2] > 0 ){
            ans.push_back(i+1);
            ans.push_back(i+3);
            i+= 2;
        }
        if(a[i] > 0){
            p = 1;
        }
    }

    if(p == 1 && ans.size() == 0){
        cout << 1 << endl;
        cout << n << endl;
    }else{

    cout << ans.size() << endl;
    sort(ans.rbegin(),ans.rend());
    imp(ans);
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
}2
4 3
8
20 19 17 15 14 13 10 9
11
19 16 15 13 12 11 10 8 6 3 1
3
6 3 1
5
10 9 8 7 5
9
18 17 16 14 11 10 5 4 2
5
10 5 4 3 1
10
13 12 11 9 8 7 6 4 3 2
2
6 5
1
1
1
6
9
17 14 12 11 10 6 5 4 1
7
13 12 11 10 9 3 2
5
12 11 8 6 3
3
10 6 4
6
10 8 7 3 2 1
1
3
3
5 4 3
9
20 19 15 14 9 5 4 3 2
9
16 15 14 11 9 8 6 5 3
6
8 7 6 5 4 3
6
9 8 6 4 2 1
4
8 6 4 2
10
16 15 13 12 10 9 5 4 3 2
5
9 8 6 2 1
5
10 7 4 2 1
7
19 18 16 12 11 6 1
3
13 12 10
2
4 1
4
8 4 2 1