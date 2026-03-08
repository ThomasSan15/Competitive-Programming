#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int x, y , s;
    int t1 , t2;
    int px = 0;
    int py = 0;
    int p2 = 0;
    int temp;
    cin >> x >> y >> s;

    temp = x;
    while(temp > 0){
        temp = temp / 10;
        px++;
    }

    temp = y;
    while(temp > 0){
        temp = temp / 10;
        py++;
    }

    for(int i = 2; i <= 10; i++ ){
        t1 = 0;
    
        temp = x;
        p2 = 0;
        while(px > p2){
            
       t1 += ((temp % 10) * pow(i,p2)) ;
       temp = temp / 10;
        p2++;
        }


          for(int j = 2; j <= 10; j++ ){
            p2 = 0;
            t2 = 0;
            temp = y;
             while(py > p2){
            
       t2 += ((temp % 10) * pow(j,p2)) ;
       temp = temp / 10;
        p2++;
        }


      if(t1 + t2 == s){
        if(x / 10 == 0 && y / 10 == 0){
            cout << x + 1 << " " << y + 1 << endl;
            
             return 1;
        }

        else if(x / 10 == 0){
            cout << i << " " << x + 1 << endl;
            return 1;
        }
         else if(y / 10 == 0){
            cout << i << " " << y + 1 << endl;
        
            return 1;
        }
        else{
        cout << i << " " << j << endl;
        return 1;
      }
    }
    }
     
}
}