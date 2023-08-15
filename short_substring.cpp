#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        if(s.size()==2)
        {
            cout<<s<<endl;
        }
        else
        {
            string ans="";
            ans+=s[0];
            for(int i=1;i<s.size();i+=2)
            {
                ans+=s[i];
            }
            cout<<ans<<endl;
        }
    }
}
