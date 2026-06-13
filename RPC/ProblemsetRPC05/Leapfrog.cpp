//

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
#define imp(v) {for(auto i : v) cout << i ; cout << "\n";}
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

int vals(char s){
    if(s == 'a') return 2;
    if(s == 'b') return 3;
    if(s == 'c') return 4;
    if(s == 'd') return 5;
    if(s == 'e') return 6;
    if(s == 'f') return 7;
    if(s == 'g') return 8;
    if(s == 'h') return 9;
    if(s == 'i') return 10;
    if(s == 'j') return 11;
    if(s == 'k') return 12;
    if(s == 'l') return 13;
    if(s == 'm') return 14;
    if(s == 'n') return 15;
    if(s == 'o') return 16;
    if(s == 'p') return 17;
    if(s == 'q') return 18;
    if(s == 'r') return 19;
    if(s == 's') return 20;
    if(s == 't') return 21;
    if(s == 'u') return 22;
    if(s == 'v') return 23;
    if(s == 'w') return 24;
    if(s == 'x') return 25;
    if(s == 'y') return 26;
    if(s == 'z') return 27;
}
void solve() {
    string t, k;
    cin >> t;
    cin >> k;

    string aux;
    cin.ignore();
    getline(cin, aux);

    string work;
    for(int i = 0; i < aux.size(); i++){
        if(isalpha(aux[i])){
            work.pb(tolower(static_cast<unsigned char>(aux[i])));
        }
    }
  
   
     string ans(work.size(), '_');
    if(t == "E"){
        
            int location = 0;
            int letter = 0;
            int dir = 1;
            
    
            for(int j = 0; j < k.size();j++){
                location = vals(k[j]);
                if(dir == 1){
                      dir ^= 1;
                for(int moves = 0, pos = 0; pos < ans.size(); pos++){
                    if(ans[pos] == '_'){
                        moves++;
                        if(moves == location){

                        if(letter < work.size()){
                        ans[pos] = work[letter];
                        letter++;
                        moves = 0;
                        }else{
                          
                            break;
                        }
                    }
                }
                }
            
            }else{
                dir ^= 1;
                  for(int pos = work.size()-1 , moves = 0; pos >= 0; pos--){
                    if(ans[pos] == '_'){
                        moves++;
                        if(moves == location){
                            if(letter < work.size()){
                        ans[pos] = work[letter];
                        letter++;
                        moves = 0;
                            }else{
                               
                                break;
                            }
                    }
                }
                }
            }
            }

             while(letter < work.size()){
                location = 1;
                if(dir == 1){
                      dir ^= 1;
                for(int moves = 0, pos = 0; pos < ans.size(); pos++){
                    if(ans[pos] == '_'){
                        moves++;
                        if(moves == location){

                        if(letter < work.size()){
                        ans[pos] = work[letter];
                        letter++;
                        moves = 0;
                      
                        }else{
                          
                            break;
                        }
                    }
                }
                }
            
            }else{
                dir ^= 1;
                  for(int pos = work.size()-1 , moves = 0; pos >= 0; pos--){
                    if(ans[pos] == '_'){
                        moves++;
                        if(moves == location){
                            if(letter < work.size()){
                        ans[pos] = work[letter];
                        letter++;
                        moves = 0;
            
                            }else{
                               
                                break;
                            }
                    }
                }
                }
            }
            }
        
        imp(ans);
    }else{
        
        string aux2;
        int location = 0;
            int letter = 0;
            int dir = 1;
            
    
            for(int j = 0; j < k.size();j++){
                location = vals(k[j]);
                if(dir == 1){
                      dir ^= 1;
                for(int moves = 0, pos = 0; pos < work.size(); pos++){
                    if(work[pos] != '_'){
                        moves++;
                        if(moves == location){
                       
                        aux2.pb(work[pos]);
                        work[pos] = '_';
                        moves = 0;
                        letter++;
                    }
                }
                }
            
            }else{
                dir ^= 1;
                  for(int pos = work.size()-1 , moves = 0; pos >= 0; pos--){
                    if(work[pos] != '_'){
                        moves++;
                        if(moves == location){
                        
                        aux2.pb(work[pos]);
                        work[pos] = '_';
                        moves = 0;
                        letter++;
                    }
                }
                }
            }
            }
                
                location = 1;
                if(dir == 1){
                      dir ^= 1;
                for(int moves = 0, pos = 0; pos < work.size(); pos++){
                    if(work[pos] != '_'){
                        moves++;
                                      
                        aux2.pb(work[pos]);
                        work[pos] = '_';
                        moves = 0;
                      
                    
                }
                }
            
            }else{
                dir ^= 1;
                  for(int pos = work.size()-1 , moves = 0; pos >= 0; pos--){
                    if(work[pos] != '_'){
                        
                          
                            aux2.pb(work[pos]);
                         work[pos] = '_';
            
                           
                    }
                }
                }
            
            
            imp(aux2);
          
    }
    
}

int main() {
    fastio

    int t = 1;
   
    while (t--) {
        solve();
    }

    return 0;
}