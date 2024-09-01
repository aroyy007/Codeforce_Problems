#include <iostream>

#include <bits/stdc++.h>

#include <algorithm>

#include <vector>

#include <stdlib.h>

#include <time.h>

using namespace std;
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define fraction()                \
    cout.unsetf(ios::floatfield); \
    cout.precision(10);           \
    cout.setf(ios::fixed, ios::floatfield);
#define file()                        \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
typedef pair<int, int> pii;
typedef pair<double, double> pdd;
typedef pair<ll, ll> pll;
typedef vector<pii> vii;
typedef vector<pll> vll;
typedef double dl;
#define endl '\n'
#define PB push_back
#define coy cout << "YES" << endl;
#define con cout << "NO" << endl;
#define ain(A, NN)              \
    for (ll I = 0; I < NN; I++) \
    cin >> A[I]
using namespace std;

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
            a[i]--; // Assuming input is 1-based and converting to 0-based index
        }

        vector<ll> b(n, 0);
        vector<bool> vis(n, false);
        string s;
        cin >> s;

        for (int i = 0; i < n; i++)
        {
            if (!vis[i])
            {
                vector<ll> cyc;
                int bb = 0;
                int x = i;

                while (!vis[x])
                {
                    vis[x] = true;
                    cyc.push_back(x);
                    if (s[x] == '0')
                    {
                        bb++;
                    }
                    x = a[x];
                }

                for (int idx : cyc)
                {
                    b[idx] = bb;
                }
            }
        }

        for (int i = 0; i < n; i++)
        {
            cout << b[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
