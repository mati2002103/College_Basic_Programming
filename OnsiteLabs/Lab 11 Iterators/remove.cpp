#include <iostream>
#include <vector>
std::vector<int>::iterator remove(std::vector<int>::iterator begin,
                                  std::vector<int>::iterator end,
                                  int element)
{
    for (auto iterator = begin; iterator < end; ++iterator)
    {
        if (*iterator != element)
        {
            *begin++ = *iterator;
        }
    }
    return begin;
}
int main()
{
    std::vector<int> vector{-7, 5, 2, 2, 11, 2, 3};
    auto result = remove(vector.begin(), vector.end(), 2);
    vector.erase(result, vector.end());
    for (auto iterator = vector.cbegin(); iterator < vector.cend();)
    {
        std::cout << *iterator++ << " ";
    }
    std::cout << std::endl;
}
