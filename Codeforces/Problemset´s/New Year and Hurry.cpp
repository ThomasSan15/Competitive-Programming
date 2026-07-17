//https://codeforces.com/problemset/problem/750/A

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

int checker(int max, int n){
    int sum = 0;
    for(int i = 1; i <= n; i++){
        sum += i * 5;
    }
   return sum <= max? 1: 0;
}

void solve(){
    int n, k; cin >> n >> k;

    int max = 4 * 60 - k;

    int low = 0;
    int high = n;
    int mid = 0;

    while(low <= high){
        mid = low + (high - low) / 2;

        if(checker(max,mid)){
            low = mid + 1;
        }else{
            high = mid - 1;
        }
        //cout << " LOW " << low << " HIGH " << high << endl;
    }
    cout << high << endl;


}

int main() {
    fastio
    
    int t = 1;

    while (t--) {
       solve();
    }

    return 0;
}