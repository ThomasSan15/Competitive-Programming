#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n = 0, m = 0 , p =0; 
    cin>> n >> m;
    vector<int> u, v, res;

    for(int i = 0; i < m; i++){
        cin >> p;
        u.push_back(p);
        cin >> p;
        v.push_back(p);
    }

    for(int i = 0; i < u.size() ; i++){
        cout << " u: " << u.at(i) << " v: " << v.at(i) << endl;
        if(u.at(i) == 1){
            res.push_back(v.at(i));
        }
    }
    
    p =0;
    while(!p){
          p = 1;
    for(int i = 0 , j = 0; i < u.size() && j < res.size(); i++){
        auto pos = find(res.begin(), res.end(), v.at(i)) ;
        if(u.at(i) == res.at(j) && !(res.empty())){
            p = 0;
            res.push_back(v.at(i));
            j++;
        }
    }
}

    cout << res.size() << endl;
}