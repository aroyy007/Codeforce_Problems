#include<bits/stdc++.h>
using namespace std;

#define fastio() ios_base::sync_with_stdio(0); cout.tie(0); cin.tie(0);

#define int long long
#define endl '\n'
#define PB push_back
#define coy cout << "YES" << endl;
#define con cout << "NO" << endl;
#define ain(A, NN)              \
    for (ll I = 0; I < NN; I++) \
    cin >> A[I]

void solve(){
    int n,a,b;
    cin>>n>>a>>b;

    int absolute = abs(a-b);

    if(absolute%2==0){
        coy;
    }
    else{
        con;
    }
}

int32_t main(){
    fastio();

    int t,i=1;
    cin>>t;
    while(t--){
        //cout<<"Case "<<i<<": ";
        solve();
    }
}
