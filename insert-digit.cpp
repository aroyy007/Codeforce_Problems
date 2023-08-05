#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, d;
        cin >> n >> d;

        string num_str;
        cin >> num_str;

        string result_str;
        for (int i = 0; i < n; i++)
        {
            if (num_str[i] - '0' < d)
            {
                result_str += to_string(d);
                result_str += num_str.substr(i);
                break;
            }
            else
            {
                result_str += num_str[i];
            }
        }

        if (result_str.size() == n)
        {
            result_str += to_string(d);
        }

        cout << result_str << endl;
    }

    return 0;
}
