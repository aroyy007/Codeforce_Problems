#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    for(char i = 'a'; i <= 'z'; i++)
    {
        if(s[0] == i)
        {
            s[0] = toupper(s[0]);
        }
    }
    cout<<s<<endl;
}
