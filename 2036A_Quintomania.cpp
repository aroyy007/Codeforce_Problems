#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

int main()
{
    optimize();

    ll t;
    cin >> t;

    while (t--)
    {
        ll n;
        cin >> n;

        vector<ll> a(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        bool flag = true;

        for (ll i = 1; i < n; i++)
        {
            if (abs(a[i] - a[i - 1]) != 5 && abs(a[i] - a[i - 1]) != 7)
            {
                flag = false;
                break;
            }
        }

        if (flag)
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
