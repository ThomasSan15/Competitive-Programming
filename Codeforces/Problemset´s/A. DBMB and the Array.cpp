// https://codeforces.com/problemset/problem/2193/A
#include <bits/stdc++.h>
#include <vector>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
#define pb push_back
#define all(x) (x).begin(), (x).end()

using ll = long long;


int sumarray(vector<int> a){
    int x = 0;
    for(int i = 0; i < a.size() - 1; i++){
        x += a[i];
    }
    return x;
}

int anyOdd(vector<int> a){
     int x = -1;
    for(int i = 0; i < a.size() - 1; i++){
        if(a[i] % 2 != 0 )x = i;
        break;
    }
    return x;
}

void solve(){
    ll n, s, x;
    cin >> n >> s >> x;
    vector<int> a(n);

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    if(x % 2 == 0 && anyOdd(a) == -1 && s % 2 != 0){
        cout << "NO" << endl;
    }else{
        cout << "yes" << endl;
    }


}

int main(){
    fastio

    int t = 1;
     cin >> t;

    while(t--){
        solve();
    }

    return 0;
}