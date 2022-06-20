#define _USE_MATH_DEFINES
#include <iostream>
#include <vector>
#include <cmath>

#define ld long double

using namespace std;

int main(){

    ld r, h; cin >> r >> h;

    ld ch = h - (2 * r);
    ld vc = M_PI * pow(r, 2) * ch;
    ld vs = 4 * M_PI * pow(r, 3) / 3;
    ld sc = 2 * M_PI * r * ch;
    ld ss = 4 * M_PI * pow(r, 2);

    cout.precision(11);
    cout << vc + vs << " " << sc + ss;

    return 0;
}
