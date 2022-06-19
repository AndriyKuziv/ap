#include <bits/stdc++.h>

#define ll long long

using namespace std;

int n;
ll values[200009], mary = 0, zenyk = 0;

int main() {
    
    cin >> n;
    
    
    for (int i = 0; i < 2 * n; i++) {
        cin >> values[i];
    }
    
    
    
    for (int i = 0; i < 2 * n; i += 2) {
        mary += values[i];
    }
    
    for (int i = 1; i < 2 * n; i += 2) {
        zenyk += values[i];
    }
    
    cout << "Marichka" << endl;
    
    int l = 0, r = 2 * n - 1;
    
    if (zenyk >= mary) {
        r--;
        cout << "R";
        while (l < r) {
            if (values[l] >= values[r]) {
                l += 2;
                cout << "L";
            } else {
                r -= 2;
                cout << "R";
            }
        }
    } 
    else {
        l++;
        cout << "L";
        while (l < r) {
            if (values[l] >= values[r]) {
                l += 2;
                cout << "L";
            } else {
                r -= 2;
                cout << "R";
            }
        }
    }
    return 0;
}
