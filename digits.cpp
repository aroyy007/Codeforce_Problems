#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin>>a;
    while(a--)
    {
        int n;
        cin>>n;
        if(n==0)
        {
            cout<<"0"<<endl;
        }
        else
        {
            while(n>0)
            {
                int rem=n%10;
                cout<<rem<<" ";
                n=n/10;
            }
        }
        cout<<endl;
    }
}
