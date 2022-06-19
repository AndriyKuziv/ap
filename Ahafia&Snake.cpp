#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

#define ll long long

using namespace std;

int main()
{
    int xh, yh, xg, yg;
    cin >> xh >> yh >> xg >> yg;

    cout << abs(xh - xg) + abs(yh - yg);

    return 0;
}

