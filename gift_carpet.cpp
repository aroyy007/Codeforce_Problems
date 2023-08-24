#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;

        vector<string> carpet(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> carpet[i];
        }

        bool possible = false;

        for (int col1 = 0; col1 < m; ++col1)
        {
            for (int col2 = col1 + 1; col2 < m; ++col2)
            {
                for (int col3 = col2 + 1; col3 < m; ++col3)
                {
                    for (int col4 = col3 + 1; col4 < m; ++col4)
                    {
                        bool found_v = false, found_i = false, found_k = false, found_a = false;
                        for (int row = 0; row < n; ++row)
                        {
                            if (carpet[row][col1] == 'v')
                            {
                                found_v = true;
                            }
                            if (carpet[row][col2] == 'i')
                            {
                                found_i = true;
                            }
                            if (carpet[row][col3] == 'k')
                            {
                                found_k = true;
                            }
                            if (carpet[row][col4] == 'a')
                            {
                                found_a = true;
                            }
                        }

                        if (found_v && found_i && found_k && found_a)
                        {
                            possible = true;
                            break;
                        }
                    }
                    if (possible)
                    {
                        break;
                    }
                }
                if (possible)
                {
                    break;
                }
            }
            if (possible)
            {
                break;
            }
        }

        if (possible)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
