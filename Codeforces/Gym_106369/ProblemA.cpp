#include <iostream>
#include <string>

using namespace std;

int main(){

    int n = 0;
    cin >> n;
 
    string a = to_string(n);
   
    for(char c: a){
        if(c == '7'){
            if(n % 7 == 0){
                cout << "3" << endl;
                return 0;
            }
            else{
                cout << "2" << endl;
                return 0;
            }
            
        }
        

        }

        if(n % 7 == 0){
            cout << "1" << endl;
            return 0;
        }
        else{
            cout << "0" << endl;
            return 0;
        }
        

    }