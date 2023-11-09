#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int x = 10;
        int a = s[0] - '0';
        int b = s[1] - '0';
        int c = s[2] - '0';
        int d = s[3] - '0';

        if (a == 0) a = x;
        if (b == 0) b = x;
        if (c == 0) c = x;
        if (d == 0) d = x;

        int steps = abs(a - 1) + abs(b - a) + abs(c - b) + abs(d - c);
        cout << steps + s.length() << endl;
    }
    return 0;
}
