#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int n;
    cin >> n;

    sort(s.begin(), s.end());

    int count = 0;

    if (n > s.size())
    {
        cout << "impossible" << endl;
    }
    else
    {
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] != s[i + 1])
            {
                count++;
            }
        }
        if (n - count < 0)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << n - count << endl;
        }
    }
}
