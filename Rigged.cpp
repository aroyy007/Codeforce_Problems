#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, a, b, x, y;
        cin >> n >> a >> b;

        // int a[n], b[n];
        // for (int i = 0; i < n; i++)
        // {
        //     cin >> a[i] >> b[n];
        // }
        bool flag = false;

        for (int i = 1; i < n; i++)
        {
            cin >> x >> y;
            if ((x >= a) && (y >= b))
            {
                flag = true;
            }
        }
        if (flag)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << a << endl;
        }
    }

    return 0;
}
