#include <iostream>
#include <cstring>
using namespace std;

#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

void solve() {
    char a[100001];
    cin >> a + 1;

    int n = strlen(a + 1);

    if (n == 1) {
        cout << "-1\n";
    } else if (n == 2) {
        if (a[1] == a[2]) {
            cout << a[1] << a[2] << "\n";
        } else {
            cout << "-1\n";
        }
    } else {
        int pos = -1;
        for (int i = 1; i < n; i++) {
            if (a[i] == a[i + 1]) {
                pos = i;
                break;
            }
        }

        if (pos != -1) {
            cout << a[pos] << a[pos + 1] << "\n";
        } else {
            for (int i = 1; i <= n - 2; i++) {
                if (a[i] != a[i + 1] && a[i] != a[i + 2] && a[i + 1] != a[i + 2]) {
                    pos = i;
                    break;
                }
            }

            if (pos != -1) {
                cout << a[pos] << a[pos + 1] << a[pos + 2] << "\n";
            } else {
                cout << "-1\n";
            }
        }
    }
}

int main() {
    optimize();

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
