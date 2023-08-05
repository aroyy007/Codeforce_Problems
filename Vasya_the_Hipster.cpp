#include <iostream>
using namespace std;

int main() 
{
    int a, b;
    cin >> a >> b;

    int m = min(a, b);
    a -= m;
    b -= m;

    int s = (a + b) / 2;
    
    cout << m << " " << s << endl;

    return 0;
}
