#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a, b, c;
    cin >> a >> b;
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == b[i])
        {
            c = c + '0';
        }
        else
        {
            c = c + '1';
        }
    }
    cout << c << endl;
}
