#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n],sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        
    }
    for(int i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    double avg=(double)sum/n;
    cout<<fixed<<setprecision(12)<<avg<<endl;
}
