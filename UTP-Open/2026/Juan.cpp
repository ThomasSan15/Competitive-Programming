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



void dfs(int u, vector<vector<int>>& adj, vector<bool>& vis, int& cnt) {
    vis[u] = true;
    cnt++;
    
    for (int v : adj[u]) {
        if (!vis[v]) {
            dfs(v, adj, vis, cnt);
        }
    }
}

void solve(int n, int p) {
    vector<vector<int>> adj(n + 1);   // 1 - > {1,2} {1,5} adj[1] -> 2, 5
    vector<bool> vis(n + 1, false);

    
    for (int i = 0; i < p; i++) {
        int u, v;
        cin >> u >> v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    int r = 0;
    int c = 0; 

    for (int i = 1; i <= n; i++) {
        if (!vis[i]) {
            int cnt = 0;

            dfs(i, adj, vis, cnt);

            r++;
            c = max(c, cnt);
        }
    }

    cout << r << " " << c << endl;
}

int main() {
    fastio
    
    int n, p; 
    
    while (cin >> n >> p && (n != 0 || p != 0)){
       solve(n,p);
    }

    return 0;
}