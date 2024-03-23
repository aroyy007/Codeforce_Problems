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

const double PI = acos(-1);
const double eps = 1e-9;
const int inf = 2000000000;
const ll infLL = 9000000000000000000;
#define MOD 1000000007

#define mem(a, b) memset(a, b, sizeof(a))
#define sqr(a) ((a) * (a))

#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define fraction()                \
    cout.unsetf(ios::floatfield); \
    cout.precision(10);           \
    cout.setf(ios::fixed, ios::floatfield);

int main()
{
    optimize();

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> a(n);
        ain(a, n);

        int left = 1, right = 1;

        for (int i = 1; i < n; i++)
        {
            if (a[i] == a[i - 1])
            {
                left++;
            }
            else
            {
                break;
            }
        }

        for (int i = n - 1; i >= 1; i--)
        {
            if (a[i] == a[i - 1])
            {
                right++;
            }
            else
            {
                break;
            }
        }

        if (left == n)
        {
            cout << 0 << endl;
        }
        else if (a[0] == a[n - 1])
        {
            cout << n - left - right << endl;
        }
        else
        {
            cout << n - max(left, right) << endl;
        }
    }

    return 0;
}