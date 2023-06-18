#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) 
    {
        cin >> a[i];
    }

    int minIndex = min_element(a, a + n) - a;
    int maxIndex = max_element(a, a + n) - a;

    swap(a[minIndex], a[maxIndex]);

    for (int i = 0; i < n; i++) 
    {
        cout << a[i] << " ";
    }
    return 0;
}
