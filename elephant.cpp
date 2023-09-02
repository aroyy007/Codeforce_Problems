#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x, c = 0;
    cin >> x;

    if (x % 5 == 0)
    {
        cout << x / 5;
    }
    else
    {
        cout << (x / 5) + 1;
    }
}
