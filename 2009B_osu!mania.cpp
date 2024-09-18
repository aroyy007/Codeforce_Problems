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

// int Calculate(string s)
// {
//     int sum = 0;
//     for (int i = 0; i < s.size(); i++)
//     {
//         if (s[i] >= 'a' && s[i] <= 'z')
//         {
//             sum += s[i] - 'a' + 1;
//         }
//         else if (s[i] >= 'A' && s[i] <= 'Z')
//         {
//             sum += s[i] - 'A' + 1;
//         }
//     }
//     while (sum > 9)
//     {
//         sum = sum_d(sum);
//     }
//     return sum;
// }

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

        vector<vector<char>> a(n, vector<char>(4));

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                cin >> a[i][j];
            }
        }

        vector<int> b;

        for (int i = n - 1; i >= 0; i--)
        {
            for (int j = 0; j < 4; j++)
            {
                if (a[i][j] == '#')
                {
                    b.push_back(j);
                    break;
                }
            }
        }

        // reverse(b.begin(), b.end());

        for (int i = 0; i < b.size(); i++)
        {
            cout << b[i] + 1 << " ";
        }

        cout << endl;
    }

    return 0;
}
