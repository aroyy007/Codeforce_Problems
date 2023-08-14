#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v(4);
    for (int i = 0; i < 4; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    
    cout << abs(v[3] - v[2]) << " " << abs(v[3] - v[1]) << " " << abs(v[3] - v[0]) << endl;

    return 0;
}
