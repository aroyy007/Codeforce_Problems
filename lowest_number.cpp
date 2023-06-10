#include <bits/stdc++.h>
using namespace std;

int main()
{
   int N;

    cin >> N;

    int A[N];

    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }

    int minNum = INT_MAX;
    int minIndex = -1;

    for (int i = 0; i < N; i++)
    {
        if (A[i] < minNum)
        {
            minNum = A[i];
            minIndex = i + 1;
        }
    }

    cout <<  minNum<<" ";
    cout << minIndex << endl;

    return 0;
}
