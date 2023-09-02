#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, c = 0, a = 0;
    cin >> x;

    while (c <= x)
    {
        a++;
        c = c + a * (a + 1) / 2;
    }
    cout << a - 1;
}
