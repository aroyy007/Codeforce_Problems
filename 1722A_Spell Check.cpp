#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s = "Timur";
    sort(s.begin(), s.end());
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        string a;
        cin >> a;
        sort(a.begin(), a.end());
        if (a == s)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
