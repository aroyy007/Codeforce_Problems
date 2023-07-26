#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    while (cin >> a >> b && a > 0 && b > 0)
    {
        int x = min(a, b);
        int y = max(a, b);
        int sum = 0;
        for (int i = x; i <= y; i++)
        {
            cout << i << " ";
            sum += i;
        }
        cout << "sum ="<<sum << endl;
    }

    return 0;
}
