#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n = 0, q = 0, d = 0, value = 0;
    vector <int> a;
    vector<int> s;
    cin >> n >> q >> d;

    for(int i = 0; i < n; i++){
        cin >> value;
        a.push_back(value);
    }
    for(int i = 0; i < n; i++){
        cin >> value;
        s.push_back(value);
    }

    for(int i = 0; i < n; i++){
        a.at(i) / s.at(i);
    }


}