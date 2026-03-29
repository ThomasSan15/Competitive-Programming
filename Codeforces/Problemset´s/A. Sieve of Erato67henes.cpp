//https://codeforces.com/problemset/problem/2195/A

#include <iostream>
#include <vector>

using namespace std;

int main(){
    int t = 0, n = 0, b = 1;
    cin >> t;
    while (t)
    {
        cin >> n;
        vector<int> a(n);

        for (int i = 0; i < n; i++){
            cin >> a[i];
        }
        
        for (int i = 0, j = 1 ; i < n - 1; j++){
            if((a.at(i) * a.at(j)) % 67 == 0){
                cout << "YES" << endl;
                b = 0;
                break;
            }
            if(j + 1 >= n){
                i++;
                j = i + 1;
            }
        }
        if(b == 1){
            cout << "NO" << endl;
        }
        b = 1;
        a.clear();
        a.shrink_to_fit();
        t--;    

    }
    return 0;
    
    
}