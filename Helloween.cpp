#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int n;
	cin >> n;

	int ci, res = 0;
	for (int i = 0; i < n; i++) {
		cin >> ci;
		if (ci <= 2) res++;
		else if (3 <= ci && ci <= 7) res += 2;
		else if (8 <= ci && ci <= 47) res += 3;
		else if (ci > 47) res += 4;
	}

	cout << res;

	return 0;
}
