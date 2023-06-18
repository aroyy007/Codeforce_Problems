#include<bits/stdc++.h>
#define coy cout<<"YES"<<endl
#define con cout<<"NO"<<endl
#define ll long long
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
void sol()
{
    ll n,l,sz,i,k=1;
    cin>>n;
    map<ll,ll> mp;
    while(n--)
    {
        cin>>l;
        mp[l]++;
    }
    sz=mp.size();
    // cout<<sz<<endl;
    // for(auto &v:mp) cout<<v.first<<" "<<v.second<<endl;
    if(mp[0]==0)
    {
        con;
        return;
    }
    for(i=1;i<sz;i++)
    {
        if(mp[i]==0||mp[i]>mp[i-1])
        {
            k=0;
            break;
        }
    }
    if(k) coy;
    else con;
}
int main()
{
    fast;
    ll t;
    cin>>t;
    while(t--)
    {
        sol();
    }
}
