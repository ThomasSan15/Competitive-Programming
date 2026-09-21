//https://codeforces.com/problemset/problem/2264/A

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
    vv a(n);
    inp(a);
    vv visited(n+1,0);

    for(int i = 0, j = n - 1; i <= j; ){
        if(a[j] < a[i] && visited[i] == 0 && visited[j] == 0){
            swap(a[i],a[j]);
            visited[i] = 1;
            visited[j] = 1;
        }
        else{
            if(a[j] != j + 1)i++;
            else if(a[i] != i+1)j--;
            else{
                i++;
                j--;
            }
        }
    }
    cout << (is_sorted(ALL(a)) ? "YES": "NO") << endl;

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