#include <iostream>

template <int N>
class Modulo {
private:
    int value;

public:
    Modulo() : value(0) {}

    Modulo(int initialValue) : value(initialValue % N) {
        if (value < 0) {
            value += N;
        }
    }

    Modulo<N> operator+(const Modulo<N>& other) const {
        return Modulo<N>((value + other.value) % N);
    }

    Modulo<N> operator*(const Modulo<N>& other) const {
        return Modulo<N>((value * other.value) % N);
    }

    Modulo<N>& operator++() {
        value = (value + 1) % N;
        return *this;
    }

    Modulo<N> operator++(int) {
        Modulo<N> temp(*this);
        ++(*this);
        return temp;
    }

    friend std::istream& operator>>(std::istream& is, Modulo<N>& obj) {
        is >> obj.value;
        obj.value %= N;
        if (obj.value < 0) {
            obj.value += N;
        }
        return is;
    }

    friend std::ostream& operator<<(std::ostream& os, const Modulo<N>& obj) {
        os << obj.value;
        return os;
    }
};

int main() {
    Modulo<16> modulo1, modulo2;
    std::cin >> modulo1 >> modulo2;
    std::cout << modulo1 + modulo2 << " " << modulo1 * modulo2 << std::endl;
    std::cout << ++modulo1 << " " << modulo2++ << std::endl;
    return 0;
}
