#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, x = 0, y = 0;
        cin >> n;
        char s[n];
        cin >> s;

        for (int i = 0; i < n; i++) {
            if (s[i] == 'L')
                x--;
            else if (s[i] == 'R')
                x++;
            else if (s[i] == 'U')
                y++;
            else if (s[i] == 'D')
                y--;
        }

        if (x == 0 && y == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
