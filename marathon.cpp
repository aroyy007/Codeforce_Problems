#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a[4],c=0;
        for(int i=0;i<4;i++)
        {
            cin>>a[i];
        }

        for(int i=1;i<4;i++)
        {
            if(a[0]<a[i])
                {
                    c++;
                }

        }
        cout<<c<<endl;
    }
}
