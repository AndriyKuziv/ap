#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int n;
	cin >> n;

	int ai;
	for (int i = 1; i < n + 1; i++) {
		cin >> ai;
		if (ai > 0)cout << i << " ";
	}

	return 0;
}
