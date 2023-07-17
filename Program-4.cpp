#include <iostream>
#include <unordered_map>
#include <vector>

std::unordered_map<int, int> countMultiples(const std::vector<int>& numbers) {
    std::unordered_map<int, int> result;

    // Initialize the count for each number
    for (int i = 1; i <= 9; i++) {
        result[i] = 0;
    }

    // Count the multiples of each number
    for (int number : numbers) {
        for (int i = 1; i <= 9; i++) {
            if (number % i == 0) {
                result[i]++;
            }
        }
    }

    return result;
}

int main() {
    std::vector<int> numbers = {1, 2, 8, 9, 12, 46, 76, 82, 15, 20, 30};
    std::unordered_map<int, int> counts = countMultiples(numbers);

    // Output the counts
    for (int i = 1; i <= 9; i++) {
        std::cout << i << ": " << counts[i] << ", ";
    }
    std::cout << std::endl;

    return 0;
}

