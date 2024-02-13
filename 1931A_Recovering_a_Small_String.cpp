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

        // int a = (n - 1) / 26;
        // cout << a + 1 << endl;
        // int b = (n - 1) % 26;
        // cout << b + 1 << endl;
        // ans = string(3 - a, 'a' + b) + string(a, 'a');
        // cout << ans << endl;
        string ans = "abcdefghijklmnopqrstuvwxyz";

        if (n <= 27)
        {
            cout << "aa" << ans[n - 3] << endl;
        }
        else if (n <= 52 && n > 27)  
        {
            int y = n - 26;
            int z = y - 1;
            cout << 'a' << ans[z - 1] << 'z' << endl;
        }
        else if (n > 52)
        {
            int y = n - 52;
            // int z = y - 1;
            cout << ans[y - 1] << 'z' << 'z' << endl;
        }
    }

    return 0;
}
