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

    string s;
    cin >> s;

    int c = 0;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == '.')
        {
            c++;
        }
    }

    if (s.find("...") != string::npos)
    {
        cout << 2 << endl;
    }
    else
    {
        cout << c << endl;
    }
}

int32_t main()
{
    fastio();

    int t, i = 1;
    cin >> t;
    while (t--)
    {
        // cout<<"Case "<<i<<": ";
        solve();
    }
}
