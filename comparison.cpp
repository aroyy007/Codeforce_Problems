#include <bits/stdc++>
using namespace std;
 
int main() {
    int A, B;
    char S;
    cin >> A >> S >> B;
 
    bool comparison = (S == '<' && A < B) || (S == '>' && A > B) || (S == '=' && A == B);
 
    if (comparison) {
        cout << "Right" << endl;
    } else {
        cout << "Wrong" << endl;
    }
 
    return 0;
}
