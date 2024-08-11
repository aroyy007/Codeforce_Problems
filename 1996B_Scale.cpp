#include <bits/stdc++.h>
using namespace std;

typedef long long ll;


int main()
{
    ll t;
    cin >> t;

    while (t--)
    {
        ll n, k;
        cin >> n >> k;

        vector<vector<char>> a(n, vector<char>(n)); 

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> a[i][j];
            }
        }

        for (int i = 0; i < n; i += k)
        {
            for (int j = 0; j < n; j += k)
            {
                cout << a[i][j]; 
            }
            cout << endl;
        }
    }
    return 0;
}
