#include <iostream>
using namespace std;

int main() {
    string S;
    cin >> S;

    int start = 0;
    int end = S.length() - 1;
    bool isPalindrome = true;

    while (start < end) {
        if (S[start] != S[end]) {
            isPalindrome = false;
            break;
        }
        start++;
        end--;
    }

    if (isPalindrome) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
