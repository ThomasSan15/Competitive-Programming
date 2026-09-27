#include <bits/stdc++.h>
#include <algorithm>
#include <complex>
#include <map>
#include <set>
#include <string>
#include <vector>
#include <numeric>
#include <array>
#include <cassert>

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

// const ll INF = 1e18;
// const int MOD = 1e9 + 7;

#ifdef LOCAL
#define debug(x) cerr << #x << " = " << x << endl;
#else
#define debug(x)
#endif


void solve() {
    
}

int main() {
    fastio

    int n;
    string p;
    vv c ;
    int countS = 0;
    int countM = 0;
    int countL = 0;
    int boxes = 0;
    char value;
    int valor = 0;
    cin >> n;

    for(int i = 0; i < n; i ++){
        cin >> value;
        p.push_back(value);
        cin >> valor;
        c.push_back(valor);
    }




    for(int i = 0; i < n; i++){
        if(p[i] == 'S'){
             countS += c.at(i); 
             }
        else{
        if(p[i] == 'M'){
            
             countM += c.at(i);
            }
             else{
        if(p[i] == 'L'){

         countL += c.at(i);
         
        }
    }
    }
}
   
    
         if(countS > 6 && countS > 0){
         if(countS % 6 == 0){
             boxes += countS / 6;
        }else{
              boxes += 1 + countS / 6;
         }
    }else{
        if(countS != 0){
        boxes++;
        }
    }

    if(countM > 8 && countM > 0){
        if(countM % 8 == 0){
            boxes += countM / 8;
        }else{
             boxes += 1 + countM / 8;
        }
    }else{
       if(countM != 0){
        boxes++;
        }
    }
    if(countL > 12 && countL > 0){
        if(countL % 12 == 0){
            boxes += countL / 12;
        }else{
             boxes += 1 + countL / 12;
        }
    }else{
        if(countL != 0){
        boxes++;
        }
    }



    cout << boxes << endl;


    return 0;
}