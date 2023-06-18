#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,t;
    cin>>s;
    cin>>t;

    int a = s.size();
    int b= t.size();

    cout<<a<<" "<<b<<endl;

    string concat = s+t;
    cout<<concat<<endl;

    swap(s[0],t[0]);
    cout<<s<<" "<<t<<endl;
    return 0;
}
