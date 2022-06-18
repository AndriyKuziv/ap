#include <iostream>
#include <cmath>

#define ll long long

using namespace std;

bool smpl(ll x) {
	for (ll i = 2; i <= sqrt(x); i++)
		if (x % i == 0)
			return false;
	return true;
}

ll nsd(ll a, ll b) {
	if (b == 0) return a;
	return nsd(b, a % b);
}

ll nsk(ll a, ll b) {
	return a / nsd(a, b) * b;
}

int log(ll n) {
	ll kil = 1, i = 2;
	while (i <= n)
	{
		ll t = 0;
		while (n % i == 0)
		{
			t++;
			n /= i;
		}
		kil *= t + 1;
		i++;
	}
	if (kil != 1) { kil *= 2; }
	return kil;
}

int main(int ac, char* av[]) {

	ll x; ll i, j, k = 1, g;
	cin >> x;

	if (smpl(x)) { 
		cout << "3";
		return 0; 
	}
	
	ll res = log(x * x) / 2;
	cout << res;

	return 0;
}
