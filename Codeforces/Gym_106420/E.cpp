
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, h;
    cin >> n >> h;
    vector<int> vectorDuraciones(n);
    vector<int> vectorDPS(n);
    for (int i = 0; i < n; i++)
    {
        cin >> vectorDuraciones[i] >> vectorDPS[i];
    }

    int level = 0;
    int temporalHP = h;
    while (h > 0)
    {
        for (int i = 0; i < n; i++)
        {
            int duracion = vectorDuraciones[i];
            int dps = vectorDPS[i];
            long long dañoTotal = 1LL * duracion * (dps - level);
            if (level >= dps )
            {
                dañoTotal = 0;
            }
            h -= dañoTotal;
        }
        if (h > 0)
        {
            break;
        }
        level++;
        h = temporalHP;
    }
    cout << level << endl;
}