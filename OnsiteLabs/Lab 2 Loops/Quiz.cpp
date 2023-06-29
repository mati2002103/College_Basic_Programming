#include <cstdlib>
#include <ctime>
#include <iostream>
int main()
{
    std::srand(std::time(nullptr));
    for (int index = 0; index < 10; ++index)
    {
        int a = 1 + std::rand() % 10;
        int b = 1 + std::rand() % 10;
        int answer;
        do
        {
            std::cout << a << " " << b << " ";
            std::cin >> answer;
        } while(answer != a * b);
    }
}
