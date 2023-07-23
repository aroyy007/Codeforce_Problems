#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int x = 0;

    while(n--)
    {
        string a;
        cin>>a;
        if(a == "X++" || a == "++X")
        {
            x++;
        }
        else if(a == "X--" || a == "--X")
        {
            x--;
        }
    }
    cout<<x<<endl;
}
