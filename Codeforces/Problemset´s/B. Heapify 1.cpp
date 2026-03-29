//https://codeforces.com/problemset/problem/2195/B

#include <iostream>
#include <vector>

using namespace std;

int main(){
    int t = 0, n = 0;
    vector<int> a;
    cin >> t;
    while(t){
        cin >> n;
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        
        t--;
    }
    return 0;
}