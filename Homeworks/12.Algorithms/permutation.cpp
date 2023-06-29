#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <ctime>
#include <cstdlib>

int main() {
    int n;
    std::cin >> n;

    std::vector<int> numbers(n);
    std::iota(numbers.begin(), numbers.end(), 0);  // Wypełnienie wektora kolejnymi liczbami

    std::srand(static_cast<unsigned int>(std::time(nullptr)));  // Inicjalizacja generatora losowego
    std::random_shuffle(numbers.begin(), numbers.end());  // Losowa permutacja

    for (const auto& num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
