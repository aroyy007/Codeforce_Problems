#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cin >> x;
    int position = -1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == x)
        {
            position = i;
            break;
        }
    }
    cout << position << endl;
}
