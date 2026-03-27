//http://codeforces.com/problemset/problem/2197/A

#include <bits/stdc++.h>

using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);


int Sum_Digits(int x){
    int sum = 0;
    while(x > 0){
        sum += x % 10;
        x = x / 10;
    }
    return sum;
}

int Digits(int x){
    int count = 0;
     while(x > 0){
        count++;
        x = x / 10;
    }
     count = pow(10,count);
    return count;
}

int main(){
    fastio;
    int t, x ,y, count = 0;
    cin >> t;
    while(t--){
        cin >> x;
        
        for(y = x; y <= x + 200; y++){
            if(y - Sum_Digits(y) == x){
                count++;
            }
        }
        cout << count << endl;
        count = 0;
    }

}