#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, c = 0;
    cin >> n;

    string s;
    cin >> s;

    for (int i = 0; i < n; i++)
    {
        s[i] = tolower(s[i]);
    }

    sort(s.begin(), s.end());

    for (int i = 0; i < n; i++)
    {
        if (s[i] != s[i + 1])
        {
            c++;
        }
    }

    if (c == 26)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}
