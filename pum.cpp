#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<3;j++)
        {
            k++;
            cout<<k<<" ";
        }
        cout<<"PUM";
        cout<<endl;
        k++;
    }
}
