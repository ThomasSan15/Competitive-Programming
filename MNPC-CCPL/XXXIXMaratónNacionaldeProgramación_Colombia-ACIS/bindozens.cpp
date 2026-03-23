#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main() {
    
    string b;
    int d = 0;
    int value = 0;
    cin >> b; 
    for(int i = 0, j = b.length() - 1; i < b.length() ; i++, j--){
       if(b.at(i) == '1'){
        value += (1 * pow(2,j));
       }
    }
    d = value % 12;
    cout << d << endl;

    return 0;
}