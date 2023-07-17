#include <iostream>

int main() {
    int a;
    std::cout << "Enter a value for a: ";
    std::cin >> a;

    for (int i = 1; i <= a; i += 2) {
        std::cout << i << " ";
    }

    return 0;
}

