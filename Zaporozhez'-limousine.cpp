#include <iostream>

using namespace std;

int main(){

    int n, k, x; cin >> n >> k >> x;

    int hi;
    bool abswheel = false, impossible = false;
    for (int i = 0; i < n; i++) {
        cin >> hi;
        if (hi > k) {
            if (x > 0) {
                x--;
                continue;
            }
            else if (!abswheel) {
                abswheel = true;
                continue;
            }
            else {
                impossible = true;
                break;
            }
        }
    }

    if (impossible) cout << "NO";
    else cout << "YES";

    return 0;
}
