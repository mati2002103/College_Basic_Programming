#include <iostream>
#include <vector>
#include <functional>

std::vector<int>::iterator transform(std::vector<int>::const_iterator start1, std::vector<int>::const_iterator end1, std::vector<int>::iterator start2, std::function<int(int)> operation) {
    auto it1 = start1;  // Iterator do przechodzenia przez pierwszy wektor
    auto it2 = start2;  // Iterator do zapisywania wyników operacji

    while (it1 != end1) {
        *it2 = operation(*it1);
        ++it1;
        ++it2;
    }

    return it2;
}

int main() {
    std::vector<int> vector1 {-7, 5, 1, 2, 11};
    std::vector<int> vector2(5);
    auto result = transform(vector1.cbegin(), vector1.cend(), vector2.begin(), [](int element) { return element * element; });

    for (auto iterator = vector2.cbegin(); iterator < result;) {
        std::cout << *iterator++ << " ";
    }

    std::cout << std::endl;

    return 0;
}
