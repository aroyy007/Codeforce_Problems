#include <bits/stdc++.h>
#include <algorithm>
#include <vector>
#include <iostream>

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
#define file()                        \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);

#define dbg(args...)            \
    do                          \
    {                           \
        cerr << #args << " : "; \
        debug(args);            \
    } while (0)
void debug()
{
    cerr << endl;
}
template <typename T, typename... hello>
void debug(T arg, const hello &...rest)
{
    cerr << arg << ' ';
    debug(rest...);
}

ll gcd(ll a, ll b)
{
    return __gcd(a, b);
}
ll lcm(ll a, ll b)
{
    return a * (b / gcd(a, b));
}

int diff(int a, int b)
{
    return b - a;
}

bool check_palindrome(string s)
{
    string a = s;
    reverse(a.begin(), a.end());
    if (s == a)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool check_square(int n)
{
    int s = sqrt(n);
    return s * s == n;
}

bool check_cube(int n)
{
    int s = round(cbrt(n));
    return s * s * s == n;
}

bool check_prime(int n)
{
    if (n == 1)
    {
        return false;
    }
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

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

int main()
{
    optimize();

    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        int hour = stoi(s.substr(0, 2));
        int minute = stoi(s.substr(3, 2));

        string period = (hour >= 12) ? "PM" : "AM";

        if (hour == 0)
        {
            hour = 12;
        }
        else if (hour > 12)
        {
            hour -= 12;
        }

        string n_hour = to_string(hour);
        if (n_hour.size() == 1)
        {
            n_hour = "0" + n_hour;
        }

        cout << n_hour + ":" + s.substr(3, 2) + " " + period << endl;
    }

    return 0;
}
