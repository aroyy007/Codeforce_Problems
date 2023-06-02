#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    bool lucky=false;
    for(int i=a;i<=b;i++)
    {
        if(i%10!=4&&i%10!=7)
        {
            lucky=false;
        }
        else
        {
            lucky=true;
            cout<<i<<" "<<endl;
        }
    }
    if(!lucky)
    {
        cout<<"-1"<<endl;
    }
    
    return 0;
}
