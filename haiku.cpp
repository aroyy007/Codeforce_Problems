#include <bits/stdc++.h>
using namespace std;

int main()
{
    string p[3];
    for (int i = 0; i < 3; i++)
    {
        getline(cin, p[i]);
    }
    int s[3] = {0};
    for (int i = 0; i < 3; i++)
    {
        for (char c : p[i])
        {
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
            {
                s[i]++;
            }
        }
    }
    if (s[0] == 5 && s[1] == 7 && s[2] == 5)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
