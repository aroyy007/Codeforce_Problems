#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        
        vector<int> a(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        vector<int> b = a;

        sort(b.begin(), b.end());

        for (int i = 0; i < n; i++)
        {
            if (a[i] != b[1])
            {
                cout << i + 1 << endl;
                break;
            }
        }
    }

    return 0;
}
