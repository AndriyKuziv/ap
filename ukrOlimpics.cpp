#include <iostream>
#include <stack>

#define ll long long

using namespace std;

int main() {
    string s;
    cin >> s;

    stack<ll> st;

    int count = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '(') count++;
    }

    cout << count << endl;
    for (int i = 0; i < s.length(); i++) {

        if (s[i] == '(') {
            st.push(i + 1);
        }
        else if (s[i] == ')') {
            int x = st.top();
            cout << x << " " << i + 1 << endl;
            st.pop();
        }

    }

    return 0;
}
