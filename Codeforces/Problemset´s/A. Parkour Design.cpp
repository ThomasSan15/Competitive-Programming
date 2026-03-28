#include <bits/stdc++.h>
using namespace std;


#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);

using ll = long long;
using ld = long double;


#define pb push_back
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()


const ll INF = 1e18;
const int MOD = 1e9 + 7;


#ifdef LOCAL
#define debug(x) cerr << #x << " = " << x << endl;
#else
#define debug(x)
#endif


int main() {
    fastio
    int x = 0, y = 0;

    int t = 0;
    cin >> t;
    
    while (t--) {
        cin >> x >> y;
        if((float)-(x/4) <= y ||  y <= (float)(x/2)){
        if((y + x) % 3 == 0){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }}else{
             cout << "NO" << endl;
        }

    }
    return 0;
}

    