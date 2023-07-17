#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, c = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    m=*min_element(a,a+n);
    c=count(a,a+n,m);
    if (c % 2 != 1)
    {
        cout << "Unlucky" << endl;
    }
    else
    {
        cout << "Lucky" << endl;
    }
}
