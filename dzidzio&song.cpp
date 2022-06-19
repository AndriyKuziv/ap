#include <iostream>

using namespace std;

int main(){
    string s;
    cin >> s;

    int p = 0;
    string l; bool check = false;
    for (int i = 0; i < s.size(); i++) {
        l = s;

        if (s[i] != ' ') {
            p++;
            s.erase(i, 1);
            check = true;
        }
        if (l[i] == l[i + 1]) {
            p--;
        }

        if (check) {
            check = false;
            i--;
        }
    }

    cout << p;

    return 0;
}
