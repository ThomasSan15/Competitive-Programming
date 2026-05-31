//https://codeforces.com/problemset/problem/1374/B

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
    ll n; cin >> n;
    
    int ans =0;
    
        while(n != 1){
            if(n % 6 == 0){
                n /= 6;
            }else{
                n *= 2;
            }
            ans++;
            if(ans > 100){
                cout << -1 << endl;
                return void();
            }
        }

        cout << ans << endl;
        
        //this is not the best solution to this problem.

        /*The best solution in this problem is the next:
        let count2 be the exponent of 2 in the prime factorization of the number
        and let be count3 the number of power of 3 that have the number
        if count2 > count3, the answer is -1, why? = 
        for example n = 12; is equivalent to 2^2 * 3^1,
        if we multiply de number by 2 we add one power of 2, 
        12 * 2 = 2^3 * 3^1, but if we divide the number by 6 we decrease both exponents by 1
        in 1 both exponents, for example = 12 / 6 = 2^1 * 3^1, now that´s the reason
        why if count2 > count3 the ans is -1, because we only can increase the value
        of power of 2, not the power of 3. But if the number has 
        count2 <= count3, the answer is (count3-count2) + count3, why? =
        because we need the same power in both numbers and later divide the number in 6
        so if we have n = 108 = 2^2 * 3^3; if we multiply by 2 = 108 * 2 = 2^3 * 3^3,
        so that's the reason of the (count3 - count2) (the diference of the power of both numbers),
        and + count3 because that is the number of times that we have divide by 6 
        to get the 1.
        */
       // ans = (count3 - count2) + count3
    
    
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