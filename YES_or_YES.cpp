#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        string a = "YES";
        string b = s;
        transform(b.begin(), b.end(), b.begin(), ::toupper);
        //bool flag = true;

        if (b == a)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}
