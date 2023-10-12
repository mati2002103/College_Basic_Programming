#include <iostream>
#include <vector>

std::vector<int>::iterator min_element(std::vector<int>::iterator start, std::vector<int>::iterator end) {
    std::vector<int>::iterator min = start; // Inicjalizacja min jako pierwszego elementu

    for (std::vector<int>::iterator it = start; it != end; ++it) {
        if (*it < *min) {
            min = it;
        }
    }

    return min;
}

std::vector<int>::const_iterator min_element(std::vector<int>::const_iterator start, std::vector<int>::const_iterator end) {
    std::vector<int>::const_iterator min = start; // Inicjalizacja min jako pierwszego elementu

    for (std::vector<int>::const_iterator it = start; it != end; ++it) {
        if (*it < *min) {
            min = it;
        }
    }

    return min;
}

int main() {
    std::vector<int> vector {7, 5, 1, 12, 8};
    auto result1 = min_element(vector.begin(), vector.end());
    auto result2 = min_element(vector.cbegin(), vector.cend());
    std::cout << result1 - vector.begin() << " " << result2 - vector.cbegin() << std::endl;
}
