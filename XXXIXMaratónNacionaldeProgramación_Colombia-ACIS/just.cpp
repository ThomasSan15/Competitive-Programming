#include <iostream>
#include <string>

using namespace std;

int palindrome(string a){

    for(int i = 0, j = a.size() - 1; i != j;){
        if(a.at(i) != ' ')
       if(a.at(i) == a.at(j) ){
         i++; 
         j--;
       }else{
        return 0;
       }
    }
    return 1;
}

string reformed(string a){
for(int i = 0; i < a.size() - 1; i++){
       if(a.at(i) >= 65 && a.at(i) <= 90){
         a.at(i) += 32;
       }
    }

}