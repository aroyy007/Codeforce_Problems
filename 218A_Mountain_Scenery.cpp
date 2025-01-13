#include <bits/stdc++.h>
using namespace std;

#define fastio()                  \
    ios_base::sync_with_stdio(0); \
    cout.tie(0);                  \
    cin.tie(0);

#define int long long
#define endl '\n'
#define PB push_back
#define coy cout << "YES" << endl;
#define con cout << "NO" << endl;
#define ain(A, NN)               \
    for (int I = 0; I < NN; I++) \
    cin >> A[I]

void solve()
{
    int n, k;
    cin >> n >> k;
    n = (2 * n + 1);
    
    vector<int> a(n);
    ain(a, n);

    for (int i = 1; i < n - 1; i++)
    {
        if (k && a[i] > a[i - 1] + 1 && a[i] > 1 + a[i + 1])
        {
            k--;
            a[i]--;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}

int32_t main()
{
    fastio();

    int t, i = 1;
    // cin >> t;
    // while (t--)
    // {
        // cout<<"Case "<<i<<": ";
        solve();
    // }
}
