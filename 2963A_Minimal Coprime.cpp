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
    int l, r;
    cin >> l >> r;
    if (l == 1 && r == 1)
    {
        cout << 1 << endl;
    }
    else
    {
        cout << r - l << endl;
    }
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
