#include <bits/stdc++.h>
#include <algorithm>
#include <vector>
#include <iostream>
#include <stdlib.h>
#include <time.h> 

using namespace std;

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
    int tt;
    cin >> tt;

    while (tt--)
    {
        int n;
        cin >> n;

        string S;
        cin >> S;

        int ans = 0;

        vector<int> freq(26, 0);
        for (int i = 0; i < n; ++i)
        {
            freq[S[i] - 'a']++;
        }

        int mxFreq = *max_element(freq.begin(), freq.end());
        int others = n - mxFreq;

        ans = max(0, mxFreq - others);
        if (n & 1)
        {
            ans = max(ans, 1);
        }

        cout << ans << endl;
    }

    return 0;
}
