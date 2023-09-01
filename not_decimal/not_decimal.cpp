#include <bits/stdc++.h>
using namespace std;

int main()
{
    double k;
    cin >> k;

    int p = 1, q = 1;

    while (1)
    {
        
        if ((p / q) > k)
        {
            q++;
        }
        else if((p / q) < k)
        {
            p++;
        }
        else if ((p / q) == k)
        {
            
            break;
        }
    }
    cout<<"YES"<<endl;
    cout << p << " " << q;
}
