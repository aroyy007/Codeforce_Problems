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
    int n;
    cin >> n;
    vector<int> a(n);
    ain(a, n);
    int ans = 0;
    for (int i = 1; i < n - 1; i++)
    {
        if (a[i - 1] == 1 && a[i] == 0 && a[i + 1] == 1)
        {
            a[i + 1] = 0;
            a[i - 1] = 0;
            ans++;
        }
    }
    cout << ans << endl;
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
