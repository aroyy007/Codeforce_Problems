#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,c=0,m=0;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i]; 
        }
        for(int i=0;i<n;i++)
        {
            if(a[i]==0)
            {
                c++;
            }
            else
            {
                m = max(m, c);
                c = 0;
            }
        }
        m = max(m, c);
        cout<<m<<endl;
    }
}
