#include <iostream>
#include <iomanip>
#include <cmath>

#define ld long double

using namespace std;

int main(){

    ld l, w; cin >> l >> w;

    ld res = sqrt( pow(l,2) + pow(w,2) );

    cout <<fixed<< setprecision(2) << res;

    return 0;
}
