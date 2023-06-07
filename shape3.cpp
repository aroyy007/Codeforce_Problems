#include <iostream>
#include <cmath>

int main() {
    int N;
    std::cin >> N;

    int totalRows = 2 * N;

    // Upper half of the diamond
    for (int row = 1; row <= N; row++) {
        int spaces = N - row;

        // Print spaces
        for (int i = 0; i < spaces; i++) {
            std::cout << " ";
        }

        // Print stars
        for (int i = 0; i < (2 * row) - 1; i++) {
            std::cout << "*";
        }

        std::cout << std::endl;
    }

    // Lower half of the diamond
    for (int row = N - 1; row >= 1; row--) {
        int spaces = N - row;

        // Print spaces
        for (int i = 0; i < spaces; i++) {
            std::cout << " ";
        }

        // Print stars
        for (int i = 0; i < (2 * row) - 1; i++) {
            std::cout << "*";
        }

        std::cout << std::endl;
    }

    return 0;
}
