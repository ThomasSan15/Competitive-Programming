#include <iostream>

using namespace std;

int main(){
    int age1 = 0, age2 = 0, age3 = 0, amount1 = 0, amount2 = 0;

    cin >> age1 >> amount1 ;
    cin >> age2 >> amount2 ;
    cin >> age3 ;

    if((age3 - age1) * amount1 >= (age3 - age2) * amount2){
        cout << "1"<< endl;
    }else{
        cout << "2" << endl;
    }
    
}



