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

    int j = 1;
    while(j <= n){
    for(int i = 0 , l = 0; i < u.size() ; i++){
        auto pos = find(res.begin(), res.end(), v.at(i)) ;
        auto exist = find(res.begin(), res.end(), j) ;
        if(j == 1){
        if(u.at(i) == 1 && !(pos != res.end())){
            res.push_back(v.at(i));
            // cout << " CICLO " << j << " " << res.at(l) << endl;
            // l++;
        }
    }else{
        if(u.at(i) == j && !(pos != res.end()) && (exist != res.end()) && v.at(i) != 1){
            res.push_back(v.at(i));
            //  cout << " CICLO " << j << " " << res.at(l) << endl;
            // l++;
        }
    }
    }
    j++;
}
    
//   for(int i = 0; i < res.size(); i++){
//      cout << " RES " << res.at(i) << endl;
//    }
    // p =0;
    // while(!p){
    //       p = 1;
    // for(int i = 0 , j = 0; i < u.size() && j < res.size(); i++){
    //     auto pos = find(res.begin(), res.end(), v.at(i)) ;
    //     if(u.at(i) == res.at(j) && !(res.empty()) && !(pos != res.end())){
    //         p = 0;
    //         res.push_back(v.at(i));
    //         j++;
    //     }
      // }
    cout << res.size() + 1 << endl;
} 