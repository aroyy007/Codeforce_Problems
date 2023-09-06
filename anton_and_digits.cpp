#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int k2, k3, k5, k6;
    cin >> k2 >> k3 >> k5 >> k6;

    int max256 = min({k2, k5, k6});
    
    int max32 = min(k2-max256, k3);

    
    int result = (max256 * 256) + (max32 * 32);

    cout << result << endl;

    return 0;
}
