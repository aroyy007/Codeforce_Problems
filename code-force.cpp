#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        char c;
        cin >> c;

        if (strchr("codeforces", c) != NULL) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
