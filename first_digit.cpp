#include <bits/stdc++>
using namespace std;

int main() {
    int X;
    cin >> X;

    int firstDigit = X / 1000;

    if (firstDigit % 2 == 0) 
    {
        cout << "EVEN" << endl;
    } 
    else 
    {
        cout << "ODD" << endl;
    }

    return 0;
}
