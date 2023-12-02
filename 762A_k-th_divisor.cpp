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

    ll n, k;
    cin >> n >> k;
    vector<ll> v;
    // if(check_prime(n))
    //{
    //     cout<<"-1"<<endl;
    //     return 0;
    // }
    // for (ll i = 1; i <= n; i++)
    // {
    //     if (n % i == 0)
    //     {
    //         a.push_back(i);
    //     }
    // }
    if (n == 1)
    {
        v.push_back(1);
    }
    else if (n == 2)
    {
        v.push_back(1);
        v.push_back(2);
    }
    else
    {
        v.push_back(1);
        v.push_back(n);
        for (int i = 2; 1LL * i * i <= n; i++)
        {
            if (n % i == 0)
            {
                v.push_back(i);
                if (std::find(v.begin(), v.end(), n / i) == v.end())
                    v.push_back(n / i);
            }
        }
        
    }
    sort(v.begin(), v.end());
    if (v.size() < k)
    {
        cout << "-1" << endl;
    }
    else
    {

        cout << v[k - 1] << endl;
    }
    return 0;
}
