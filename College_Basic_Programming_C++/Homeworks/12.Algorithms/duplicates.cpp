#include <iostream>
#include <algorithm>
#include <vector>

int main() {
    std::vector<int> numbers;
    int num;

    // Odczytywanie liczb ze standardowego wejścia
    while (std::cin >> num) {
        numbers.push_back(num);
    }

    // Sortowanie liczb w wektorze
    std::sort(numbers.begin(), numbers.end());

    // Wyszukiwanie powtarzających się liczb
    auto it = std::adjacent_find(numbers.begin(), numbers.end());

    // Wypisywanie unikalnych duplikatów
    while (it != numbers.end()) {
        int val = *it;
        std::cout << val << " ";

        // Przeskakiwanie do następnego elementu o wartości różnej od val
        it = std::find_if(std::next(it), numbers.end(), [val](int num) {
            return num != val;
        });

        // Pomijanie pozostałych duplikatów
        it = std::adjacent_find(it, numbers.end());
    }

    std::cout << std::endl;

    return 0;
}
