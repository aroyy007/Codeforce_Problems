#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    int x = (7 * min(min(a,b/2),c/4));
    cout << x << endl;
}
