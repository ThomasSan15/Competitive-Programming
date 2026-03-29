//https://codeforces.com/problemset/problem/2195/B

#include <iostream>
#include <vector>

using namespace std;

int main(){
    int t = 0, n = 0, b = 0;
    cin >> t;
    while(t){
        cin >> n;
        vector<int> a(n + 1);
      for(int i = 1; i <= n; i++){
    cin >> a[i];
}

for(int i = 1; i <= n/2; i++){
    if(a[i] > a[2*i]){
        swap(a[i], a[2*i]);
    }
}

for(int i = 1; i < n; i++){
    if(a[i] > a[i + 1]){
        cout << "NO" << endl;
        b = 1;
        break;
    }
}

if(b != 1){
    cout << "YES" << endl;
}
b = 0;
        a.clear();
        a.shrink_to_fit();
        t--;
    }
    return 0;
}