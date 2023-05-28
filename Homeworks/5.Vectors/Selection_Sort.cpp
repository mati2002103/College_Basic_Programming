#include <iostream>
#include <vector>
#include <utility>

int main()
{
    std::vector<int> v;
    int x;

    while (std::cin >> x) {
        v.push_back(x);
    }

    for (int i = 0; i < v.size() - 1; ++i) {
        int min_index = i;

        for (int j = i + 1; j < v.size(); ++j) {
            if (v[j] < v[min_index]) {
                min_index = j;
            }
        }

        if (min_index != i) {
            std::swap(v[i], v[min_index]);
        }
        for (int k = 0; k < v.size(); ++k) {
            std::cout << v[k] << " ";
        }
        std::cout << std::endl;
    }

    for (int k = 0; k < v.size(); ++k) {
        std::cout << v[k] << " ";
    }
    std::cout << std::endl;
}