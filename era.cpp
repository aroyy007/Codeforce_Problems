#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, ans = 0;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (a[i] > i + 1)
            {
                ans = max(ans, a[i] - (i + 1));
            }
        }
        cout << ans << endl;
    }
    return 0;
}
