#include <iostream>
#include <string>

using namespace std;

int main() 
{
    string s;
    getline(cin, s);
    for (int i = 0; i < s.size(); i++) 
    {
        if (s[i] == '\\') 
        {  
            cout << s.substr(0, i) << endl;
            break;
        }
    }

    return 0;
}
