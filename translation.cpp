#include <iostream>
using namespace std;

int main()
{
    string s, t;
    cin >> s >> t;

    int n = s.length();
    bool isReverse = true;

    for (int i = 0; i < n; i++)
    {
        if (s[i] != t[n - 1 - i])
        {
            isReverse = false;
            break;
        }
    }

    if (isReverse)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
