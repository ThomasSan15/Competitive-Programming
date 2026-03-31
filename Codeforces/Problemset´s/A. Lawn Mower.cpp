//https://codeforces.com/problemset/problem/2194/A
#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
#define pb push_back
#define all(x) (x).begin(), (x).end()

using ll = long long;

void solve(){
    ll n ,w;
    cin >> n >> w;
    cout << n - (n/w) << endl;
    
}

int main(){
    fastio
    int t = 0;
    cin >> t;

    while(t--){
        solve();
    }

    return 0;
}