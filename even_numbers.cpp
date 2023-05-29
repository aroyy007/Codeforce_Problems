#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    bool even = false;
    for (int i = 1; i <= n; i++) 
    {
        if(i%2==0)
        {
            cout << i << endl;
            even=true;
        }
    }
    if(even==false)
    {
        cout<<"-1"<<endl;
    }
    return 0;
}
