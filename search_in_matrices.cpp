#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int a[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
    int x;
    cin>>x;

    bool found = false;

    for(int i = 0; i < n; i++) 
    {
        for(int j = 0; j < m; j++) 
        {
            if(a[i][j] == x) 
            {
                found = true;
                break;
            }
        }
        if(found) 
        {
            break;
        }
    }

    if(found) 
    {
        cout << "will not take number" << endl;
    } 
    else 
    {
        cout << "will take number" << endl;
    }

    return 0;
}
