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



void solve(int r, int c){

    vector<string> matriz(r);
     int sr, sc;
     queue<pair<int,int>> q;
     
     for (int i = 0; i < r; i++) {
        cin >> matriz[i];

        for (int j = 0; j < c; j++) {
            if (matriz[i][j] == '*') {
                sr = i;
                sc = j;
            }
        }
    }


    q.push({sr,sc});
    matriz[sr][sc] = '#';
    int ans = 0;
    int dr[] = {-1,1,0,0};
    int dc[] = {0,0,-1, 1};

    while(!q.empty()){
        auto [x,y] = q.front();
        q.pop();
        ans++;

        for(int k = 0; k < 4; k++){
            int nr = x + dr[k];
            int nc = y + dc[k];
            
            if(nr >= 0 && nr < r && nc >= 0 && nc < c && matriz[nr][nc] == '.'){
                matriz[nr][nc] = '#';
                q.push({nr, nc});

            }
        }
    }

    cout << ans << endl;
    
}

int main() {
    fastio
    
    
    int r, c; 

    while (cin >> r >> c && (r != 0  || c != 0)) {
       solve(r,c);
    }

    return 0;
}