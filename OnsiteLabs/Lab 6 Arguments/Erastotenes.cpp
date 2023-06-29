#include <cstdlib>
#include <iostream>
#include <vector>
std::vector<int> eratostenes(int limit)
{
    std::vector<bool> sieve(limit, true);
    for (int number = 2; number < limit; ++number)
    {
        for (int multiple = 2 * number; multiple < limit; multiple += number)
        {
            sieve[multiple] = false;
        }
    }
    std::vector<int> primes;
    for (int number = 2; number < limit; ++number)
    {
        if (sieve[number])
        {
            primes.push_back(number);
        }
    }
    return primes;
}
int main(int argc, char *argv[])
{
    int limit = std::atoi(argv[1]);
    std::vector<int> primes = eratostenes(limit);
    for (int index = 0; index < primes.size();)
    {
        std::cout << primes[index++] << " ";
    }
    std::cout << std::endl;
}