#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n, m, x, r, d = 0, l = 0;
    
    cin >> n >> x >> m ;
    vector<int> a(n,0);
        
        for(int i = 0; m > i; i++){
            cin >> r;
          a.at(r-1) = a.at(r-1) + 1;
        }
       
        for(int i = 0; x - 1 > i; i++){
            d += a.at(i);
        }
        for(int i = a.size() - 1; i >= (x - 1); i--){
            l += a.at(i);
        }
    
    cout << min(d,l) << endl;

}