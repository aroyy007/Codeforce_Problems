#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int findXOR(const vector<int> &arr)
{
    int result = 0;
    for (int num : arr)
    {
        result ^= num;
    }
    return result;
}
int findMaxOdd(const vector<int> &arr)
{
    int maxOdd = INT_MIN;

    for (int num : arr)
    {
        if (num % 2 != 0 && num > maxOdd)
        {
            maxOdd = num;
        }
    }

    return (maxOdd != INT_MIN) ? maxOdd : -1;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k;
    cin >> n >> k;

    vector<int> s(n);
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }

    int ans = 111;
    for (int i = 0; i < s.size(); i++)
    {
        // if (s[i] == 1)
        // {
        //     ans = 1;
        //     break;
        // }

        if (k % s[i] == 0)
        {
            int c = k / s[i];
            ans = min(ans, c);
        }
    }
    cout << ans << endl;

    return 0;
}
