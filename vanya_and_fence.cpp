#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,h,ans=0;
    cin>>n>>h;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]>h)
        {
            ans=ans+2;
        }
        else
        {
            ans=ans+1;
        }
    }
    cout<<ans<<endl;
}
