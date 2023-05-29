#include<bits/stdc++.h>
using namespace std;
int main()
{
    int size;
    cin>>size;
    int a[size];
    for(int i = 0;i<size;i++)
    {
        cin>>a[i];
    }
    int max = a[0];
    for(int i = 0;i<size;i++)
    {
        if(a[i]>max)
        {
            max = a[i];
        }
    }
    cout<<max<<endl;
    return 0;
}
