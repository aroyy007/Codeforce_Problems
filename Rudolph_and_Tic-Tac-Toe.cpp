#include <bits/stdc++.h>
using namespace std;

bool check(char player, char a[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (a[0][i] == player && a[1][i] == player && a[2][i] == player)
            {
                return true; //column
            }
            if (a[i][0] == player && a[i][1] == player && a[i][2] == player)
            {
                return true; //row
            }
        }
    }
    if (a[0][0] == player && a[1][1] == player && a[2][2] == player)
    {
        return true; //diagonal
    }
    if (a[0][2] == player && a[1][1] == player && a[2][0] == player)
    {
        return true; //antidiagonal
    }
    return false;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        char a[3][3];
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cin >> a[i][j];
            }
        }

        bool X = check('X', a);
        bool O = check('O', a);
        bool plus = check('+', a);

        if (X)
        {
            cout << "X" << endl;
        }
        else if (O)
        {
            cout << "O" << endl;
        }
        else if (plus)
        {
            cout << "+" << endl;
        }
        else
        {
            cout << "DRAW" << endl;
        }
    }
    return 0;
}
