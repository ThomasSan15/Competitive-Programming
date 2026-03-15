#include <iostream>
#include <vector>
#include <string>

using namespace std;

 



int main(){
    int n = 0, m = 0, s = 0;
    string a;
    string result;
    int value = 0;
 cin >> n >> m;
   vector<int> nv(n,0);
    vector<int> mv (m,0);
   
    for(int i = 0; i < n; i++){
        cin >> a;

        for(char c:a){
            if(c != ':'){
                result.push_back(c);
            }
        }
        for(int i = 0; i < result.size() - 1; i++){
            value = stoi(result.substr(0,1));
            value = 3600 * value;
            value += stoi(result.substr(2,3)) * 60;
            value += stoi(result.substr(4,5));
        }
}
cout << value;
}