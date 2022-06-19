#include <iostream>

#define ll long long

using namespace std;

int main() {
	int n; cin >> n;
	ll res = 11;

	int count = 0;
	while (n > 0) {
		if (count < 7) {
			n -= 60;
			res += 9;
			count++;
		}
		else {
			n -= 60;
			res += 5;
		}
	}

	cout << res;

	return 0;
}
