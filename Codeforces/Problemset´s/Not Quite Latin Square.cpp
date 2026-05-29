//https://codeforces.com/problemset/problem/1915/B

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
    vector<vector<char>> matrix (3,(vector<char> (3)));
    char letter = ' ';
    int posx , posy = 0;

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cin >> letter;
            matrix[i][j] = letter;
            if(letter == '?'){
                posx = i;
                posy = j;
            }
        }
    }

    if(posx == 1)
    {   letter = ('A' ^ 'B' ^ 'C' ^ matrix[posx-1][posy] ^ matrix[posx+1][posy]);
        cout <<  letter << endl;
    }else if(posx == 0){
        letter =  ('A' ^ 'B' ^ 'C' ^ matrix[posx + 1][posy] ^ matrix[posx+2][posy]);
         cout << letter << endl;
    }else if(posx == 2){
         letter =  ('A' ^ 'B' ^ 'C' ^ matrix[posx - 1][posy] ^ matrix[posx-2][posy]);
         cout << letter << endl;
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