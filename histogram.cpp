#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s;
    cin >> s; 

    if(s=='+'||s=='-'||s=='*'||s=='/')
    {
        int n;
        cin >> n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n;i++) 
        {
            for(int j=0;j<a[i];j++) 
            {
                cout<<s;
            }
            cout<<endl;
        }
    }
    
    return 0;
}
