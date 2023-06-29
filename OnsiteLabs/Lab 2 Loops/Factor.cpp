#include <iostream>
int main()
{

    int number;
    std::cin >> number;
    for (int divisor = 2; number != 1; ++divisor)
    {
        while (number % divisor == 0)
        {
            std::cout << divisor << " ";
            number /= divisor;
        }
    }
    std::cout << std::endl;
}