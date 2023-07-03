#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;

        int diff = 0;
        string target = "codeforces";
        for (int i = 0; i < 10; i++)
        {
            if (s[i] != target[i])
            {
                diff++;
            }
        }

        cout << diff << endl;
    }

    return 0;
}
