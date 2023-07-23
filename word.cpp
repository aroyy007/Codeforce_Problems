#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int a=0,b=0;
    for(int i =0;i<s.size();i++)
    {
        if(s[i]>='A' && s[i]<='Z')
        {
            a++;

        }
        else
        {
            b++;
        }
    }
    if(a>b)
    {
        for(int i=0;i<s.size();i++)
        {
            s[i]=toupper(s[i]);
        }
    }
    else if(a<b)
    {
        for(int i=0;i<s.size();i++)
        {
            s[i]=tolower(s[i]);
        }
    }
    else if(a==b)
    {
        for(int i=0;i<s.size();i++)
        {
            s[i]=tolower(s[i]);
        }
    }
    cout<<s<<endl;
}
