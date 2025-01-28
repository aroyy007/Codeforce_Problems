#include <bits/stdc++.h>
using namespace std;

#define fastio()                  \
    ios_base::sync_with_stdio(0); \
    cout.tie(0);                  \
    cin.tie(0);

#define int long long int
#define endl '\n'
#define PB push_back
#define coy cout << "YES" << endl;
#define con cout << "NO" << endl;
#define ain(A, NN)               \
    for (int I = 0; I < NN; I++) \
    cin >> A[I]

void solve()
{
    int n;
    cin >> n;
    int sum = 0;
    vector<int> A, B, C;
    while (n--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        A.PB(a);
        B.PB(b);
        C.PB(c);
    }

    int sumA = accumulate(A.begin(), A.end(), 0LL);
    int sumB = accumulate(B.begin(), B.end(), 0LL);
    int sumC = accumulate(C.begin(), C.end(), 0LL);

    if (sumA == 0 && sumB == 0 && sumC == 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}

int32_t main()
{
    fastio();

    int t, i = 1;
    // cin >> t;
    // while (t--)
    // {
    //  cout << "Case " << i << ": ";
    solve();
    // i++;
    // cout << endl;
    // }
}
