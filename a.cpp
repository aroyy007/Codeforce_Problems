#include<bits/stdc++.h>
using namespace std;

int main() 
{
    string str;
    cin >> str;

    int UpperCase = 0;
    int LowerCase = 0;

    for (int i=0;i<str.size();i++) 
    {
        if (str[i] >= 'A' && str[i] <= 'Z') 
        {
            UpperCase++;
        } 
        else if (str[i] >= 'a' && str[i] <= 'z') 
        {
            LowerCase++;
        }
    }
    

    cout << UpperCase << " " << LowerCase << endl;

    return 0;
}
