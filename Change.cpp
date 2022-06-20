#include <iostream>
#include <vector>

using namespace std;

int main(){
    
    vector<int> bills = { 500, 200, 100, 50, 20, 10, 5, 2, 1 };

    int n; cin >> n;

    int count = 0, num = 500 - n;
    while (num > 0) {
        
        for (int i = 0; i < bills.size(); i++) {
            if (bills[i] <= num) { 
                num -= bills[i];
                count++;
                break;
            }
        }

    }

    cout << count;

    return 0;
}
