#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,k;
    cin >> t;
    while(t--)
    {
        cin>>k;
        for(int i = 1; ;i++)
        {
            if(i%3==0 || i%10==3)
            {
                continue;
            }
            else
            {
                k--;
            }
            if(k==0)
            {
                cout<<i<<endl;
                break;
            }
        }
    }
    return 0;
}
