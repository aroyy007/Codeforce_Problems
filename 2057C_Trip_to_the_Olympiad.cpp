#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

#define ll long long
#define endl '\n'
#define PB push_back
#define coy cout << "YES" << endl;
#define con cout << "NO" << endl;
#define ain(A, NN)              \
    for (ll I = 0; I < NN; I++) \
    cin >> A[I]

void solve()
{
    ll l, r;
    cin >> l >> r;

    ll a;
    ll ans = 0;
    for(int i=29;i>=0;i--){
        if((r&(1LL<<i))!=(l&(1LL<<i))){
            ans+=(1LL<<i);
            a=i;
            break;
        }
        else{
            if((l&(1LL<<i))){
                ans+=(1LL<<i);
            }
        }
    }

    cout<<ans-1<<" "<<ans<<" "<<(ans==r?r-2:r)<<endl;

}

int main()
{
    optimize();
    ll t,i=1;
    cin>>t;
    while(t--)
    {
        //cout<<"case "<<i<<": ";
        solve();
        //i++;
    }
    return 0;
}


