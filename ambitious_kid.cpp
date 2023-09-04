#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        a[i] = abs(a[i]);
    }

    int count = 0;
    int *minElem = min_element(a, a + n);

    if (*minElem == 0)
    {
        cout << 0;
    }

    else
    {
        cout << *minElem;
    }
    return 0;
}
