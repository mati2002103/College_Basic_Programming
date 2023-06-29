#include <iostream>
#include <vector>

std::vector<int>::iterator partial_sum(std::vector<int>::const_iterator start, std::vector<int>::const_iterator end, std::vector<int>::iterator result) {
    int sum = 0;
    for (std::vector<int>::const_iterator it = start; it != end; ++it) {
        sum += *it;
        *result = sum;
        ++result;
    }

    return result;
}

int main() {
    std::vector<int> vector {3, 2, -1, 3, 4};
    auto result = partial_sum(vector.cbegin(), vector.cend(), vector.begin());

    for (auto iterator = vector.cbegin(); iterator < result; ++iterator) {
        std::cout << *iterator << " ";
    }

    std::cout << std::endl;
}
