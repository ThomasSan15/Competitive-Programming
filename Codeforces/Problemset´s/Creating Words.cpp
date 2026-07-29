//https://codeforces.com/problemset/problem/1985/A


#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--){
        string s, g;
        cin >> s >> g;
        swap(s[0],g[0]);
        cout << s << " " << g << endl;
    }
    return 0;
}
