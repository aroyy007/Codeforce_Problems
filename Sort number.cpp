#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int A, B, C;

    cin >> A >> B >> C;

    int numbers[] = { A, B, C };

    sort(numbers, numbers + 3);
 
    for (int i = 0; i < 3; i++) {
        cout << numbers[i] << endl;
    }

    cout << endl;

    cout << A << endl;
    cout << B << endl;
    cout << C << endl;
    
    return 0;
}
