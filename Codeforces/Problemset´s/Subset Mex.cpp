//https://codeforces.com/problemset/problem/1406/A

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
    int n; cin >> n;
    vv a(n);
    inp(a);
    sort(a.begin(),a.end());
    vv A;
    vv B;
    int b = 0;
    ll num1 = 0, num2 = 0;
    
    for(int i = 0; i < n ; ){
        if( i < n - 1 && a[i] == a[i + 1] && b == 0){
            A.push_back(a[i]);
            B.push_back(a[i+1]);
            i += 2;
        }else{
            b = 1;
           
            A.push_back(a[i]);
            i++;
        }
    }

    
    set<int> s(A.begin(), A.end());
    A.assign(s.begin(), s.end()); 
    set<int> s2(B.begin(), B.end());
    B.assign(s2.begin(), s2.end()); 

    for(int i = 0; i < A.size(); i++){
        if(A[i] == i){
            num1++;
            
        }else{
            
            break;
        }
    }
     for(int i = 0; i < B.size(); i++){
        if(B[i] == i ){
            num2++;
        }else{
            break;
        }
    }
    
       cout << num1 + num2 << endl;
    
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