#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

#define ll long long

using namespace std;

const double PI = 3.141592653589793238463;

int main()
{
    double x, r; int k;
    cin >> x >> k >> r;

    double length = 2 * PI * r;

    cout.precision(10);
    cout << length * k * x;

    return 0;
}

