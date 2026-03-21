#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n = 0, m = 0, k = 0;
    int value = 0;
    cin >> n >> m >> k;
    vector<int> a;
     vector<int> b;
      vector<int> c;


   
    while(n){
        cin >> value;
        a.push_back(value);
        n--;
    }

    
    while(m){
        cin >> value;
        b.push_back(value);
        m--;
    }

    for(int i = 0, j = 0, l = 0; l < k; l++){
        if(i < a.size() && j < b.size()){
        if(a.at(i) <= b.at(j)){
            c.push_back(a.at(i));
            i++;
            cout << "A";
        }else{
            c.push_back(b.at(j));
            j++;
            cout << "B";
        }
    }
    else{
        if(i < a.size()){
            c.push_back(a.at(i));
            i++;
            cout << "A";
        }
        else{
            c.push_back(b.at(j));
            j++;
            cout << "B";
        }
    }
       
    }
    cout << endl;

}