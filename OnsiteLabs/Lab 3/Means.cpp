#include <cmath>
#include <iostream>

int main()
{
    double sum = 0., product = 1.;
    int count = 0;
    for (double value; std::cin >> value;)
    {
        sum += value;
        product *= value;
        ++count;
    }
    std::cout << sum / count << " ";
    std::cout << std::pow(product, 1. / count) << std::endl;
}