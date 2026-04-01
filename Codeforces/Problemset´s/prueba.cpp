#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> p(n);
        for(int i = 0; i < n; i++) cin >> p[i];

        // Caso trivial: ya está en orden descendente => no mejora
        if(is_sorted(p.rbegin(), p.rend())){
            for(int x : p) cout << x << " ";
            cout << "\n";
            continue;
        }

        // Encontrar el primer punto donde deja de ser sufijo creciente
        int L = n-1;
        while(L > 0 && p[L] > p[L-1]) L--;

        // Encontrar el valor máximo desde L hacia adelante
        int mx = p[L], R = L;
        for(int i = L; i < n; i++){
            if(p[i] > mx){
                mx = p[i];
                R = i;
            }
        }

        // Reversar el segmento óptimo
        reverse(p.begin() + L, p.begin() + R + 1);

        for(int x : p) cout << x << " ";
        cout << endl;
    }

    return 0;
}