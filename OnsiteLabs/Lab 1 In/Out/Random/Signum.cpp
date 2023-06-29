#include <cstdlib>
#include <ctime>
#include <iostream>
int main()
{
    std::srand(std::time(nullptr));
    int computer = 2 * (std::rand() % 2) - 1, player;
    std::cin >> player;
    std::cout << computer << std::endl;
    std::cout << std::boolalpha << (0 < computer * player) << std::endl;
}