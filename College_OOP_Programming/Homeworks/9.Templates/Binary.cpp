#include <iostream>

template <std::size_t N>
constexpr int binary(const char(&str)[N]) {
    int result = 0;
    for (std::size_t i = 0; i < N - 1; ++i) {
        result = (result << 1) + (str[i] - '0');
    }
    return result;
}

int main() {
    constexpr int b = binary("101100");
    std::cout << b << std::endl;
    return 0;
}
