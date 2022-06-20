#include <iostream>

using namespace std;

int main(){

    int temp, n, k; cin >> n >> k;

    int count = 0;
    for (int i = 0; i < n; i++) {
        cin >> temp;
        if (temp > k)count++;
    }

    cout << count;

    return 0;
}
