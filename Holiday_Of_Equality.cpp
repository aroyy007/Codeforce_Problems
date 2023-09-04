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

    int max = *max_element(a, a + n);
    int c=0;
    for (int i = 0; i < n; i++)
    {
        c += max - a[i];
    }
    cout<<c;    
}
