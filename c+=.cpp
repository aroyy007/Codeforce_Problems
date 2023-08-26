#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin >> t;

    while (t--) 
    {
        int a, b, n;
        cin >> a >> b >> n;

        int c = 0;
        while (max(a, b) <= n) 
        {
            if (a < b) 
            {
                a += b;
            } 
            else 
            {
                b += a;
            }
            c++;
        }

        cout << c << endl;
    }

    return 0;
}
