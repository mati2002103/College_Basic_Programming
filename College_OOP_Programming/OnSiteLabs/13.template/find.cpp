#include <iostream>
#include <list>

template <typename T, typename Z>
Z find_t(T begin, Z end, const int value) {
    while (begin != end) {
        if (*begin == value) {
            return begin;
        }
        ++begin;
    }
    return end; 
}

int main() {
 std::list<int> c {1, 5, -3, 6, 5, 2, 4};
 auto iter = find_t(c.begin(), c.end(), -3);
 std::cout << std::distance(c.begin(), iter) << std::endl;
}