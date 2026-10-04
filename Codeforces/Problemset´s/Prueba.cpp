#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        set<int> s;

        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            s.insert(x);
        }

        int d = s.size();

        if ((n % 2) == (d % 2))
            cout << d << '\n';
        else
            cout << d - 1 << '\n';
    }

    return 0;
}
