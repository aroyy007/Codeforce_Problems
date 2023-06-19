#include <iostream>
#include <algorithm>
#include <cctype>
using namespace std;

int main()
{
    string s;
    getline(cin, s);

    replace(s.begin(), s.end(), ',', ' ');

    for (char& c : s)
    {
        if (islower(c))
        {
            c = toupper(c);
        }
        else if (isupper(c))
        {
            c = tolower(c);
        }
    }

    cout << s << endl;

    return 0;
}
