#include <iostream>

int main() {
    int a;
    std::cout << "Enter a value for a: ";
    std::cin >> a;

    for (int i = 1; i <= a; i++) {
        std::cout << 2 * i - 1 << " ";
    }

    return 0;
}
