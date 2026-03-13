#include <iostream>
#include <string>

using namespace std;

int main(){
    int t = 0, n = 0, min = 0, max = 0, b = 0;
    
    cin >> t;
    
    for(;t > 0; t--){
        cin >> n;
        string a;
        cin >> a;
            

     for(int i = 1; i < n - 1; i++){
        if(a.at(i-1) == '1' && a.at(i+1) == '1' && a.at(i) == '0'){
            a.at(i) = '1';
            b = 1;
        }
        if(i + 1 > n - 1 && b){
            i = 1;
            b = 0;
        }
     }

     int i = 0;
     while(n - 1 >= i) {
        if(a.at(i) == '1'){
         max++;
         i++;
     }else{
        i++;
     }
    }

      b = 0;
     for(int i = 1; i < n - 1; i++){
        if(a.at(i-1) == '1' && a.at(i+1) == '1' && a.at(i) == '1'){
            a.at(i) = '0';
            b = 1;
    
        }
        if(i + 1 > n - 1 && b){
            i = 1;
            b = 0;
        }
     }
      i = 0;
     while(n - 1 >= i){
        if(a.at(i) == '1'){
         min++;
         i++;
     }else{
        i++;
     }
    }

     cout << min << " " << max << endl;
     min = 0, max = 0;
}
}