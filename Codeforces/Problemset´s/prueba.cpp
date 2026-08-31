#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n, k, l, c, d, p, nl, np;

    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int bebida = (k * l) / nl;
    int limon = c * d;
    int sal = p / np;

    int brindis = min({bebida, limon, sal});

    cout << brindis / n << endl;

    return 0;
}

