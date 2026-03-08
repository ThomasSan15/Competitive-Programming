#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int teams = 0;
    cin >> teams;
    float power = log2(teams);

    if(floor(power) == power)
    {
        cout << "0" << endl;
    }
    else{
        power = pow(2, floor(power));
        teams = teams - power;
        cout <<  teams * 2 << endl;
    }
} 

