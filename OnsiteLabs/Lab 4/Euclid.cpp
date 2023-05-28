
#include <iostream>
int euclid(int m, int n)
{
    while (n)
    {
        int k = m % n;
        m = n;
        n = k;
    }
    return m;
}
int main()
{
    int divisor = 0;
    for (int number; std::cin >> number;)
    {
        divisor = euclid(divisor, number);
    }
    std::cout << divisor << std::endl;
}