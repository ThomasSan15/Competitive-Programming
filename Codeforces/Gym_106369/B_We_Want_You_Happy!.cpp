#include <iostream>

using namespace std;

int main(){
    int n = 0;
    cin >> n;
    int custom = 0, arrival = 0, ServiceTime = 0, PatienTime = 0;
    int time = 0;
    for(; n > 0; n--){
     
    cin >> custom >> arrival  >> ServiceTime >> PatienTime;
     if(time != 0){
        if((arrival + PatienTime) < time ){
          
        }else{
            cout << custom << endl;
            time = arrival + ServiceTime;
        }
     }else{
        cout << custom << endl;
         time = arrival + ServiceTime;
     }
    
}   
}