#include <iostream>
using namespace std;

void print(int N) 
{
    for (int i = 1; i <= N; i++) 
    {
        cout << i;
        if (i != N) 
        {
            cout << " ";
        }
    }
}

int main() {
    int N;
    cin >> N;

    print(N);

    return 0;
}
