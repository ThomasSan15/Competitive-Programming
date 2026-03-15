#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int palindrome(string a){
    int n = 0;
    for(int i = 0, j = a.size() - 1; i != j;){
       if(a.at(i) == a.at(j)){
         i++; 
         j--;
         n++;
       }else{
        
       }
    }
    return n * 2 + 1;
}

int main(){
     string s;
     char p;
     cin >> s;
    int value = 0;
    for(int i = 0, j = s.size() - 1; i < j; i++){
        for(; j > i; j--){
            p = s.at(i);
            s.at(i) = s.at(j);
            s.at(j) = p;
            value = max(value, palindrome(s));
            p = s.at(i);
            s.at(i) = s.at(j);
            s.at(j) = p;
        }
        value = max(value, palindrome(s));
    }
     cout << value;
}