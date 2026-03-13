#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n = 0, k = 0;
    vector<int> a;
    int l = 0, r = 0;
    int value;

     cin >> n, cin >> k;
    for(int i = 0; n > i; i++){
        cin >> value;
        a.push_back(value);
    }

    value = 0;
    for(; k >= 0; k--){
        cin >> l, cin >> r;
        for(; r >= l; l++){
            cout << " l " << l << " r " << r;
            value += (2 - (l % 2)) * a.at(l);
        }
        cout << "valor: " << value << endl; 
    }
}