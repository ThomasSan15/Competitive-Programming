//https://codeforces.com/problemset/problem/2250/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t = 1;
    cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> a(n);
       long long L = 0, R = INT_MAX * 1LL;

	for (int i = 1; i <= n; ++i) {
		long long w; cin >> w;
		if (i % 2 != 0) R = min(R, w);
		else L = max(L, w);
	}

	cout << (n % 2 == 0 && L + 2 <= R ? "YES" : "NO") << endl;
   
    }
    return 0;
}
