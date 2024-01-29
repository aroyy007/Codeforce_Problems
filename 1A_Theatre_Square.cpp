#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n, m, a;
    cin >> n >> m >> a;

    ll x = ceil(n*1.0 / a);
    ll y = ceil(m*1.0 / a);

    cout << x * y << endl;
}
