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

void solve() {
    string s;
    cin >> s;

    if (s.size() < 26) {
        cout << -1;
        return;
    }

    int n = s.size();
    string alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    for (int i = 0; i <= n - 26; i++) {
        vector<int> freq(26, 0);
        int question_marks = 0;

        for (int j = i; j < i + 26; j++) {
            if (s[j] == '?') {
                question_marks++;
            } else {
                freq[s[j] - 'A']++;
            }
        }

        int missing_letters = 0;
        for (int count : freq) {
            if (count == 0) {
                missing_letters++;
            } else if (count > 1) {
                missing_letters = 27;
                break;
            }
        }

        if (missing_letters <= question_marks) {
            string result = s;
            set<char> used;
            for (int j = i; j < i + 26; j++) {
                if (result[j] != '?') {
                    used.insert(result[j]);
                }
            }

            auto it = alphabet.begin();
            for (int j = i; j < i + 26; j++) {
                if (result[j] == '?') {
                    while (used.count(*it)) it++;
                    result[j] = *it;
                    used.insert(*it);
                }
            }

            for (char &c : result) {
                if (c == '?') c = 'A';
            }

            cout << result;
            return;
        }
    }

    cout << -1;
}

int main()
{
    optimize();

    // ll t;
    // cin >> t;

    // for(ll tt = 1; tt <= t; tt++)
    // {
    solve();
    // }

    return 0;
}
