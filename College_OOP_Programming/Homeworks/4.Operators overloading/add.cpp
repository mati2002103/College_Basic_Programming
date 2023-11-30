#include <vector>
#include <iostream>

std::vector<double> operator+(const std::vector<double> &vector1, const std::vector<double> &vector2)
{
    std::vector<double> v3;
    for (double element : vector1)
    {
        v3.push_back(element);
    }
    for (double element : vector2)
    {
        v3.push_back(element);
    }
    return v3;
}
std::vector<double>& operator+=(std::vector<double> &vector1, const std::vector<double> &vector2)
{

    for (double element : vector2)
    {
        vector1.push_back(element);
    }
    return vector1;
};

int main()
{

    std::vector<double> vector = std::vector<double>{6.7, -12.3} +
                                 std::vector<double>{-2.7, 19};
    (vector += std::vector<double>{0.5, -2.7}) +=
        std::vector<double>{19};
    for (double element : vector)
    {
        std::cout << element << " ";
    }
    std::cout << std::endl;
    return 0;
}
