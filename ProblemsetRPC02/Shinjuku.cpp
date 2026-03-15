#include <iostream>
#include <vector>
#include <string>

using namespace std;

 
int main(){
    int n = 0, m = 0, s = 0, mini = 0;
    string a;
    string result;
    int value = 0;
 cin >> n >> m;
   vector<int> nv(n);
    vector<int> mv (m);
   
    for(int i = 0; i < n; i++){
        cin >> a;

        for(char c:a){
            if(c != ':'){
                result.push_back(c);
            }
        }
            value = stoi(result.substr(0,2));
            value = 3600 * value;
            value += stoi(result.substr(3,5)) * 60;
            value += stoi(result.substr(5,7));
            
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
            value += stoi(result.substr(3,5)) * 60;
            value += stoi(result.substr(5,7));
            
        mv.at(i) = value;
        a.clear();
        result.clear();
}
    cin >> s;
    for(int i = 0; i < nv.size() - 2; i++){
       mini = min(mv.at(i) - nv.at(i), mv.at(i + 1) - nv.at(i + 1));
    }
}