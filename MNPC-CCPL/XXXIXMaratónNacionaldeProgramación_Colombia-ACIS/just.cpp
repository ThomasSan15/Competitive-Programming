#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int palindrome(string a){
    
    for(int i = 0, j = a.size() - 1; i != j;){ 
        if(a.at(i) <= 122 && a.at(i) >= 97){
          if(a.at(j) <= 122 && a.at(j) >= 97){
       if(a.at(i) == a.at(j) ){
         i++; 
         j--;
       }else{
        return 0;
       }
      }
      else{
       j--;
       }
    }else{
      i++;
    }
  }
    return 1;
}

string reformed(string a){
  char elim = ' ';
for(int i = 0; i < a.size() - 1; i++){
       if(a.at(i) >= 65 && a.at(i) <= 90){
         a.at(i) += 32;
       }
    }
    a.erase(remove(a.begin(), a.end(), elim), a.end());

    return a;
}

int main(){
  string a;
  
  
  while(true){
    getline(cin , a);
    if(a == "*"){
      break;
    }
  a = reformed(a);

    palindrome(a) ?  cout << "Y" << endl: cout << "N" << endl;
  }
    return 0;

}