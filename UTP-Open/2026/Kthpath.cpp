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
typedef pair<ll,int> ii;
typedef vector<ll> vv;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef vector<string> vvs;
typedef vector<set<ll>> vst;


 const ll INF = 1e18;
// const int MOD = 1e9 + 7;


#ifdef LOCAL
#define debug(x) cerr << #x << " = " << x << endl;
#else
#define debug(x)
#endif

pair<ll, vector<int>> dijkstra(int src, int dst, vector<vector<ii>>& adj, set<pair<int,int>> &ban) {
    int n = adj.size();

    vector<ll> dist(n, INF);
    vector<int> parent(n, -1);

    priority_queue<ii, vector<ii>, greater<ii>> pq;

    dist[src] = 0;
    pq.push({0, src});

    while (!pq.empty()) {
        auto [d, u] = pq.top();
        
        pq.pop();

        if (d != dist[u])
            continue;

        if (u == dst)
            break;

        for (auto [w, v] : adj[u]) {
            if(ban.count({u,v})) continue;
             
            if (d + w < dist[v] ){
              
                dist[v] = d + w;
                parent[v] = u;

                pq.push({dist[v], v});
            }
        }
    }

    // No existe camino
    if (dist[dst] == INF)
        return {INF, {}};

    // Reconstruir camino
    vector<int> path;

    for (int v = dst; v != -1; v = parent[v])
        path.push_back(v);

    reverse(path.begin(), path.end());

    return {dist[dst], path};
}


void solve(){
    int n, m, k, s , d; cin >> n >> m >> k >> s >> d;
    vector<vector<pair<ll,int>>> adj(n + 1);
    set<pair<int,int>> ban;


    for(int i = 0; i < m; i++){
        int u = 0;
        int v = 0;
        int p = 0;

        cin >> u >> v >> p; 

        adj[u].push_back({p,v});
        adj[v].push_back({p,u});
    }
    pair<ll, vector<int>> respuesta;
    
   for(int i = 0; i < 1; i++){
     respuesta = dijkstra(s,d,adj,ban);
     if(respuesta.second.empty())break;

        for (int j = 0; j + 1 < respuesta.second.size(); j++) {
        ban.insert({respuesta.second[j], respuesta.second[j + 1]});
        ban.insert({respuesta.second[j + 1], respuesta.second[j]});
    }
    }

    cout << "DIST" << respuesta.first << endl;

    for(int i = 0; i < respuesta.second.size(); i++){
        if(i == respuesta.second.size() - 1){
            cout << respuesta.second[i] << endl;
        }else{
            cout << respuesta.second[i] << " - ";
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