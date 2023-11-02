
#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    getline(cin,s);
    char a ;
    transform(s.begin(),s.end(),s.begin(), ::tolower);
    
    int n=s.size();
    
    for(int i=n-1;i>=0;i--)
    {
        if(s[i]==' ' || s[i]=='?')
        {
            a=a;
            //break;
        }
        else
        {
            a+=s[i];
            break;
        }
    }
    //cout<<a<<endl;
    //char b =tolower(a);
    if(a=='a' || a =='e' || a=='i' || a=='u' || a=='o' || a=='y')
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }

    return 0;
}
