#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

#define ll long long

void solve() {
    ll n, k;
    cin >> n >> k;

    map<ll, ll> f;
    vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        f[a[i]]++;
    }

    vector<ll> v;
    for (auto &[x, y] : f) {
        v.push_back(y);
    }

    sort(v.begin(), v.end());

    ll d = v.size();
    ll r = k;

    for (ll x : v) {
        if (r >= x) {
            r -= x;
            d--;
        } else {
            break;
        }
    }

    cout << max(1LL, d) << endl;
}

int main() {
    optimize();
    ll t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
