#include <iomanip>
#include <iostream>
int main()
{
    int number;
    std::cin >> number;
    int width = 1;
    for (int maximum = number * number; maximum /= 10; ++width);
    for (int row = 1; row <= number; ++row)
    {
        for (int column = 1; column <= number; ++column)
        {
            std::cout << " " << std::setw(width) << row * column;
        }
        std::cout << std::endl;
    }
}
