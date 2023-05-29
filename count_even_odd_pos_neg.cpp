#include<bits/stdc++.h>
using namespace std;
int main()
{
    int size,e=0,o=0,p=0,n=0;
    cin>>size;
    int a[size];
    for(int i = 0;i<size;i++)
    {
        cin>>a[i];
    }
    for(int i =0; i<size;i++)
    {
        if(a[i]%2==0)
        {
            e++;
        }
        else if(a[i]%2!=0)
        {
            o++;
        }
    }
    for(int i =0; i<size;i++)
    {
        if(a[i]>0)
        {
            p++;
        }
        else if(a[i]<0)
        {
            n++;
        }
        
    }
    cout<<"Even: "<<e<<endl;
    cout<<"Odd: "<<o<<endl;
    cout<<"Positive: "<<p<<endl;
    cout<<"Negative: "<<n<<endl;

    return 0;
}
