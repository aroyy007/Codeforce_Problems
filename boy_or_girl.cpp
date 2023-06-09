#include<bits/stdc++.h>
using namespace std;
int main()
{
    string name;
    cin>>name;

    sort(name.begin(),name.end());

    name.erase(unique(name.begin(), name.end()), name.end());

    int count = name.size();

    if(count%2!=0)
    {
        cout<<"IGNORE HIM!"<<endl;
    }

    else
    {
        cout<<"CHAT WITH HER!"<<endl;
    }
}
