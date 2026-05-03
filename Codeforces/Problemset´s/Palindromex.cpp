//https://codeforces.com/contest/2227/problem/D

#include <bits/stdc++.h>
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
    int n;
    cin >> n;
    vv a(2*n);
    inp(a);
    int temp1 = 0;
    int temp2 = 0;
    int r = 0;
    int l= 0;

    int pos_firstZero = 0;
    for(int i = 0; i < 2*n; i++) {
        if(a[i] == 0) {
            pos_firstZero = i;
            break;
        }
    }
    int pos_secondZero = 0;
    for(int i = 2*n - 1; i >= 0; i--) {
        if(a[i] == 0) {
            pos_secondZero = i;
            break;
        }
    }

    
    int temp1 = pos_firstZero;
    int temp2 = pos_secondZero;
    bool flag = false;
    bool palindromexinto = false;

    while(!flag) {
        if(a[pos_firstZero] == a[pos_secondZero]) {
            if(pos_firstZero < pos_secondZero){
            pos_firstZero++;
            pos_secondZero--;
            }else{
                palindromexinto = true;
                flag = true;
            }
        } else {
              palindromexinto = false;
              flag = true;
        }
    }

    flag = false;

    if(palindromexinto){
        pos_firstZero = temp1;
        pos_secondZero = temp2;
        while(!flag){
            if(a[pos_firstZero] == a[pos_secondZero]) {
            if(pos_firstZero > 0 && pos_secondZero < 2*n - 1){
            pos_firstZero--;
            pos_secondZero++;
            }else{
                r = pos_secondZero;
                l = pos_firstZero;
            }
        } else {
              r = pos_secondZero;
            l = pos_firstZero;
            flag = true;
        }
        }
    }else{

    }

    cout << pos_firstZero << " " << pos_secondZero << endl;
    
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