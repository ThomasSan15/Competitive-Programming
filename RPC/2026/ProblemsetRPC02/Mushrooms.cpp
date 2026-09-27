#include <iostream>

using namespace std;

int main(){
    int r = 0, c = 0;

    cin >> r >> c;

     if(c == 1){
            cout << "1" << endl;
            return 0;
       }
       if(r > 2){
        cout << "-1" << endl;
        return 0;
     }
     if(r == 1 && c > 3 && c % 3 == 0){
        cout << "-1";
        return 0;
     }
     if(c % 2 == 1 && r == 2){
          cout << (c+1)/3 << endl;
         return 0;
    }
     if(c % 2 == 0 && r ==2){
        cout << "-1" << endl;
        return 0;}
        
        if(r == 1)
            cout << (c+2)/3 << endl;
            return 0;
        
     }

    
