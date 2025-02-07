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
    int n;
    cin >> n;
    vector<string> v(n);
    
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    map<string, int> mp;
    for (int i = 0; i < n; i++)
    {
        if (mp[v[i]] == 0)
        {
            cout << "OK" << endl;
        }
        else
        {
            cout << v[i] << mp[v[i]] << endl;
        }
        mp[v[i]]++;
    }
}

int32_t main()
{
    fastio();

    int t, i = 1;
    // cin >> t;
    // while (t--)
    // {
        //     cout << "Case #" << i << ": ";
        solve();
        //     i++;
        //     // cout << endl;
    //}

    return 0;
}

//! https://toph.co/p/genius-needs-help
