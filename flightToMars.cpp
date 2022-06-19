#include <iostream>

#define ld long double

using namespace std;

int main() {
	ld v, s;
	s = 225000000;

	cin >> v;
	cout.precision(15);
	cout << s / v;

	return 0;
}
