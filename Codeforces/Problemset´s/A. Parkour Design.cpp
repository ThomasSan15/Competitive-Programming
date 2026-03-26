//https://codeforces.com/problemset/problem/2202/A

#include <iostream>
using namespace std;

int main(){
    int t, x , y;
    cin >> t;
    while(t){
        cin >> x >> y;

        if((x + 1) >= 0 && y >= 0 ){
            cout << "yes";
        }else{
            cout << "NO";
        }
        t--;
    }
}