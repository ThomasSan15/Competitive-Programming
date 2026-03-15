#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

 
int main(){
    int n = 0, m = 0, s = 0;
    string a;
    string result;
    int value = 0;
 cin >> n >> m;
   vector<int> nv(n);
    vector<int> mv (m);
     vector<int> r (n);
   
    for(int i = 0; i < n; i++){
        cin >> a;

        for(char c:a){
            if(c != ':'){
                result.push_back(c);
            }
        }
            value = stoi(result.substr(0,2));
            value = 3600 * value;
           value += stoi(result.substr(2,2)) * 60;
            value += stoi(result.substr(4,4));
            
        nv.at(i) = value;
        a.clear();
        result.clear();
        
}

  for(int i = 0; i < m; i++){
        cin >> a;

        for(char c:a){
            if(c != ':'){
                result.push_back(c);
            }
        }
            value = stoi(result.substr(0,2));
            value = 3600 * value;
           value += stoi(result.substr(2,2)) * 60;
            value += stoi(result.substr(4,4));
         
        mv.at(i) = value;
        a.clear();
        result.clear();
          
}
    cin >> s;

    for(int i = 0; i < n; i++){
        r.at(i) = (mv.at(i) - nv.at(i));
        
    }
    sort(r.begin(), r.end());

    for(int i = 0; i < n; i++){
        if(r.at(i) >= s ){
            cout << r.at(i) << endl;
            return 0;
        }
    }
    cout << "-1" << endl;
    return 0;
}