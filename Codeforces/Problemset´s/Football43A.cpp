//https://codeforces.com/problemset/problem/43/A

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


int main() {
    fastio

    int t = 1;
    cin >> t;
    string s1, s2, temp;
    int count1 = 0, count2 = 0;
    
    for(int i = 0; i < t; i++){
        cin >> temp;
        if(i == 0){
            s1 = temp;
            count1++;
        }else{
            if(s1 != temp){
                s2 = temp;
                count2++;
            }else{
                count1++;
            }
        }
        


    }
    
    if(count1 > count2){
        cout << s1 << endl;
    }else{
        cout << s2 << endl;
    }

    return 0;
}