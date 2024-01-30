#include <iostream>

template <typename T>
class Vector {
private:
    T* elements;
    size_t currentSize;
    size_t capacity;

public:
    Vector() : elements(nullptr), currentSize(0), capacity(0) {}
    ~Vector() {
        delete[] elements;
    }

    T& operator[](size_t index);
    size_t size() const;
    void push_back(const T& value);
};

template <typename T>
T& Vector<T>::operator[](size_t index) {
    if (index >= currentSize) {
        throw std::out_of_range("Index out of range");
    }
    return elements[index];
}

template <typename T>
size_t Vector<T>::size() const {
    return currentSize;
}

template <typename T>
void Vector<T>::push_back(const T& value) {
    if (currentSize >= capacity) {
        size_t newCapacity = (capacity == 0) ? 1 : capacity * 2;
        T* newElements = new T[newCapacity];

        for (size_t i = 0; i < currentSize; ++i) {
            newElements[i] = elements[i];
        }

        delete[] elements;

        elements = newElements;
        capacity = newCapacity;
    }

    elements[currentSize++] = value;
}

int main() {
    Vector<std::string> vector;
    std::string e;

    while (std::cin >> e) {
        vector.push_back(e);
    }

    for (size_t i = 0; i < vector.size(); ++i) {
        std::cout << vector[i] << " ";
    }

    std::cout << std::endl;

    return 0;
}
