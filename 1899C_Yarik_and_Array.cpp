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
        int n;
        cin >> n;
        vector<int> v(n);
        for (auto &x : v)
        {
            cin >> x;
        }
        int ans = v[0];
        int mx = v[0];
        for (int i = 1; i < n; i++)
        {
            int x = abs(v[i]);
            int y = abs(v[i - 1]);
            if (x % 2 != y % 2)
            {
                mx = max(v[i], mx + v[i]);
            }
            else
            {
                mx = v[i];
            }
            ans = max(ans, mx);
        }
        cout << ans << endl;
    }

    return 0;
}
