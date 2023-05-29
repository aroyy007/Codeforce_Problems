#include<bits/stdc++.h>
using namespace std;
long long fact(int n)
{
    if(n==0)
    {
        return 1;
    }
    else
    {
        return n*fact(n-1);
    }
}
int main()
{
    long long n;
    cin>>n;
    long long a[n];
    for(int i=0;i<n;i++)
        {
            cin>>a[i];
            cout<<fact(a[i])<<endl;
        }
    
    return 0;
}
