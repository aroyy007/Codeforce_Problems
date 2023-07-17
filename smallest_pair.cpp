#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        int sum = 0;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        //sort(a, a + n);
        int nmax=INT_MAX;
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                sum = a[i] + a[j] + j - i;
                nmax=min(nmax,sum);
            }
        }
        cout<<nmax<<endl;
    }
}
