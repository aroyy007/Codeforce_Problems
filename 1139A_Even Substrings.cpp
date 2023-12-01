#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    string s;
    cin >> s;
    int a = 0;
    for (int i = 0; i < n; i++)
    {
        int num = s[i] - '0';
        if (num % 2 == 0)
        {
            a += (i + 1);
        }
        // cout << a << endl;
    }
    cout << a << endl;
    return 0;
}
