//http://codeforces.com/problemset/problem/2197/A

#include <iostream>
#include <math.h>

using namespace std;

int Sum_Digits(int x){
    int sum = 0;
    while(x > 0){
        sum += x % 10;
        x = x / 10;
    }
    return sum;
}

int Digits(int x){
    int count = 0;
     while(x > 0){
        count++;
        x = x / 10;
    }
     count = pow(10,count);
    return count;
}

int main(){
    int t, x ,y, count ,aux;
    cin >> t;
    while(t--){
        cin >> x;
        aux = Digits(x);
        for(y = 0; y < aux; y++){
            if(y - Sum_Digits(y) == x){
                count++;
            }
        }
        cout << count << endl;
        count = 0;
    }

}