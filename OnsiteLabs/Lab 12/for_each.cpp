#include <iostream>
#include <vector>

int main() {
    std::vector<int> v {17, -3, 2, 36, 15};
    for (auto i = v.begin(); i < v.end(); ++i) {
        std::cout << *i << " "; }
    std::cout << std::endl; }
