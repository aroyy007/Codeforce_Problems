#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve() {
    
    int n, k;
    cin >> n >> k;
    int x = n;
    int y = 1;
    for(int i = 0; i < n; i++){
        if((i + 1) % k == 0){
            cout << y << ' ';
            y++;
        }else{
            cout << x << ' ';
            x--;
        }
    }
    cout << endl;
}

int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
