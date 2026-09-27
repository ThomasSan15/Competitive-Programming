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
   

    string inicio;
    string fin;
    getline(cin, inicio); 
    getline(cin, fin);
    string day_s = inicio.substr(0, 3); 
    int day_start = 0;
    if ( day_s.compare("Mon") == 0){
        day_start = 1; 
    }else if ( day_s.compare("Tue") == 0){
        day_start = 2; 
    }else if ( day_s.compare("Wed") == 0){
        day_start = 3; 
    }else if ( day_s.compare("Thu") == 0){
        day_start = 4; 
    }else if ( day_s.compare("Fri") == 0){
        day_start = 5; 
    }else if ( day_s.compare("Sat") == 0){
        day_start = 6; 
    }else if ( day_s.compare("Sun") == 0){
        day_start = 7; 
    }
    
    int hour_start = stoi(inicio.substr(4, 2));
    int minute_start = stoi(inicio.substr(7, 2));

    string day_e = fin.substr(0, 3); 
    int day_end = 0;
    if ( day_e.compare("Mon") == 0){
        day_end = 1;
    }else if ( day_e.compare("Tue") == 0){
        day_end = 2;
    }else if ( day_e.compare("Wed") == 0){
        day_end = 3;
    }else if ( day_e.compare("Thu") == 0){
        day_end = 4;
    }else if ( day_e.compare("Fri") == 0){
        day_end = 5;
    }else if ( day_e.compare("Sat") == 0){
        day_end = 6;
    }else if ( day_e.compare("Sun") == 0){
        day_end = 7;
    }
    int hour_end = stoi(fin.substr(4, 2));
    int minute_end = stoi(fin.substr(7, 2));


    int day = 0; 
    int hour = 0; 
    int minute = 0; 

    if( minute_start == minute_end && hour_start == hour_end && day_start == day_end){
        cout << "1 week"<< endl;  
        return; 
    }

    if (minute_start <= minute_end){
        minute = minute_end - minute_start; 
    } else {
        minute = (60 - minute_start) + minute_end; 
        hour_start ++; 
    }

    if (hour_start <= hour_end){
        hour = hour_end - hour_start; 
    } else {
        hour = (24 - hour_start) + hour_end; 
        day_start ++; 

         
    }
    
    if (day_start <= day_end){
        day = day_end - day_start; 
    }else{
        day = 8 - day_start; 
    }

    if (day != 0 and hour != 0 and minute != 0){
        if (day > 1){
            cout << day << " days, "; 
        }else{
            cout << day << " day, "; 
        }
    }else if (day != 0 and minute == 0 and hour == 0){
        if (day > 1){
            cout << day << " days" << endl; 
        }else{
            cout << day << " day" << endl; 
        }
    }else if((day != 0 and minute != 0 and hour == 0) or (day != 0 and hour != 0 and minute == 0)){
        if (day > 1){
            cout << day << " days and "; 
        }else{
            cout << day << " day and "; 
        }
    }

    if (hour != 0 and minute != 0 and day != 0){
        if (hour > 1){
            cout << hour << " hours, "; 
        }else{
            cout << hour << " hour, "; 
        }
    }else if ((hour != 0 and minute == 0 and day == 0)){
        if (hour > 1){
            cout << hour << " hours" << endl; 
        }else{
            cout << hour << " hour" << endl; 
        }

    }else if((hour != 0 and day != 0 and minute == 0)){
        if (hour > 1){
            cout << hour << " hours" << endl; 
        }else{
            cout << hour << " hour" << endl; 
        }
    }  else if ((hour != 0 and minute != 0 and day == 0)){
        if (hour > 1){
            cout << hour << " hours and " ; 
        }else{
            cout << hour << " hour and " ; 
        }
    }
    
    if( minute != 0){
        if (minute > 1){
            cout << minute << " minutes" << endl;
        }else{
            cout << minute << " minute" << endl; 
        }
    }
    return; 

}


int main() {
    fastio
    
    solve(); 
    
    return 0;
}