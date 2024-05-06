#include <bits/stdc++.h>
#include <algorithm>
#include <vector>
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

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

#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define fraction()                \
    cout.unsetf(ios::floatfield); \
    cout.precision(10);           \
    cout.setf(ios::fixed, ios::floatfield);

const int N = 2 * 1e5 + 10;
int main()
{
    optimize();

    ll tt;
    cin >> tt;
    while (tt--)
    {
        int x;
        cin >> x;

        ll y = 0;
        ll ans = 0;

        for (int i = 1; i < x; i++)
        {
            if (ans < __gcd(i, x) + i)
            {
                y = __gcd(i, x) + i;
                ans = i;
            }
        }
        cout << ans << endl;
    }

    return 0;
}
