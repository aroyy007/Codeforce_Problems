#include <iostream>
#include <vector>
#include <cmath>
#include <string>
#include <iomanip>
#include <map>
#include <bits/stdc++.h>

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

const int MAXN = 100005;
const int LOG = 17;

#define endl '\n'
#define PB push_back
#define coy cout << "YES" << endl;
#define con cout << "NO" << endl;
#define ain(A, NN)              \
    for (ll I = 0; I < NN; I++) \
    cin >> A[I]

int sum_d(int n)
{
    int sum = 0;
    while (n > 0)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

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

int main()
{
    optimize();

    vector<vector<int>> ab(4, vector<int>(4));
    vector<vector<int>> ac(4, vector<int>(4));

    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            cin >> ab[i][j];
        }
    }

    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            ac[i][j] = ac[i][j] + ab[i][j];

            if (i + 1 <= 3)
                ac[i + 1][j] = ac[i + 1][j] + ab[i][j];
            if (i - 1 >= 1)
                ac[i - 1][j] = ac[i - 1][j] + ab[i][j];
            if (j + 1 <= 3)
                ac[i][j + 1] = ac[i][j + 1] + ab[i][j];
            if (j - 1 >= 1)
                ac[i][j - 1] = ac[i][j - 1] + ab[i][j];
        }
    }

    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            if (ac[i][j] % 2 == 0)
                cout << 1;
            else
                cout << 0;
        }
        cout << endl;
    }

    return 0;
}
