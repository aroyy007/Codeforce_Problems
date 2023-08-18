#define fast ios_base::sync_with_stdio(NULL);cin.tie(NULL);cout.tie(NULL);
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        string ab = "ab";
        string ba = "ba";
        int x = 0, y = 0;

        for (int i = 0; i < s.size() - 1; i++)
        {
            if (s.substr(i, 2) == ab)
            {
                x++;
            }
            else if (s.substr(i, 2) == ba)
            {
                y++;
            }
        }

        if(x>y)
        {
            s[0]='b';
        }
        else if(y>x)
        {
            s[0]='a';
        }
        cout<<s<<endl;
    }
    return 0;
}
