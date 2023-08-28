#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int mishka = 0, chris = 0;

    for (int i = 0; i < n; i++)
    {
        int m, c;
        cin >> m >> c;

        if (m > c)
        {
            mishka++;
        }
        else if (c > m)
        {
            chris++;
        }
    }

    if (mishka > chris)
    {
        cout << "Mishka" << endl;
    }
    else if (chris > mishka)
    {
        cout << "Chris" << endl;
    }
    else
    {
        cout << "Friendship is magic!^^" << endl;
    }

    return 0;
}
