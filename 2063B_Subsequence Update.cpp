#include <bits/stdc++.h>
using namespace std;

#define fastio()                  \
    ios_base::sync_with_stdio(0); \
    cout.tie(0);                  \
    cin.tie(0);

#define int long long int
#define endl '\n'
#define PB push_back
#define coy cout << "YES" << endl;
#define con cout << "NO" << endl;
#define ain(A, NN)               \
    for (int I = 0; I < NN; I++) \
    cin >> A[I]

void solve()
{
    int n, l, r;
    cin >> n >> l >> r;

    vector<int> a(n);
    ain(a, n);

    l--;
    r--;
    //vector<int> range(a.begin() + l, a.begin() + r + 1);
    vector<int> outside;
    vector<int> inside;

    for (int i = 0; i < n; i++)
    {
        if (i < l)
        {
            outside.push_back(a[i]);
        }
        else if (i >= l && i <= r)
        {
            outside.push_back(a[i]);
            inside.push_back(a[i]);
        }
        else
            inside.push_back(a[i]);
    }
    sort(inside.begin(), inside.end());
    sort(outside.begin(), outside.end());

    int l_sum = 0, r_sum = 0;

    for (int i = 0; i < r - l + 1; i++)
    {
        l_sum += inside[i];
        r_sum += outside[i];
    }

    cout << min(l_sum, r_sum) << endl;
}

int32_t main()
{
    fastio();

    int t, i = 1;
    cin >> t;
    while (t--)
    {
        //  cout << "Case " << i << ": ";
        solve();
        // i++;
        // cout << endl;
    }
}
