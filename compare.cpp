#include<bits/stdc++.h>
using namespace std;
int main()
{
    string X, Y;
    cin >> X >> Y;

    if (X < Y) 
    {
        cout << X << endl;
    } 
    else if(X==Y)
    {
        cout << X << endl;
    }
    else 
    {
        cout << Y << endl;
    }

    return 0;
}

