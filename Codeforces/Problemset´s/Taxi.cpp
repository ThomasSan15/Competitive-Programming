//https://codeforces.com/contest/158/problem/B

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin >> n;
    vector<int> groups(n);
    int ans = 0;
    int aux = 0;
    for(int i = 0; i < n; i++){
        cin >> groups[i];
    }
    
    sort(groups.begin(), groups.end());
    aux = groups[n-1];
    
    for(int i = 0, j = n - 1; i < j;){
     
        if(aux >= 4){
            ans++;
            j--;
            aux = groups[j]; 
        }else{
            if(aux + groups[i] <= 4){
                aux += groups[i];
                i++;
            }else{
                ans++;
                j--;
                aux = groups[j];
            }
        }
         
    }
    aux <= 4 ? ans++ : ans+=2;
    cout << ans  << endl;
    return 0;
}
