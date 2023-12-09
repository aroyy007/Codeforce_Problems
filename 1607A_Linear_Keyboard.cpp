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
using namespace std;

int main()
{
    optimize();
    int t;
    cin >> t;

    while (t--)
    {
        string k, s;
        cin >> k >> s;
        int res = 0;

        for (int i = 1; i < s.length(); ++i)
        {
            int a = k.find(s[i]);
            int b = k.find(s[i - 1]);
            res += abs(a - b);
        }

        cout << res << endl;
    }
    return 0;
}
