#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>

#define ll long long

using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;
    string s;
    cin >> s;

    map<int, map<int, bool>> u;
    u[x][y] = true;

    int turn = 0; bool check = false;
    for (int i = 0; i < s.size(); i++) {
        switch (s[i]) {
        case 'R':
            x++;
            break;
        case 'L':
            x--;
            break;
        case 'U':
            y++;
            break;
        case 'D':
            y--;
            break;
        }
        turn++;
        if (u[x][y]) {
            check = true;
            break;
        }
        else {
            u[x][y] = true;
        }
    }
    if (check) {
        cout << "Fail" << endl << turn;
    }
    else cout << "Success";

    return 0;
}

