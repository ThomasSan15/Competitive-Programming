#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int palindrome(string a){

    for(int i = 0, j = a.size() - 1; i != j;){
        if(a.at(i) != ('.' || ',' || '!' || ':')){
          if(a.at(j) != ('.' || ',' || '!' || ':')){
       if(a.at(i) == a.at(j) ){
         i++; 
         j--;
       }else{
        return 0;
       }
      }
      else{
        j--;
        i--;
       }
    }else{
      i++;
      j++;
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
  getline(cin , a);
  cout << a << endl;
  a = reformed(a);
   cout << a << endl;

    palindrome(a) ?  cout << "Y" : cout << "N";
}