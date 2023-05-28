#include <iostream>
#include <vector>
std::vector<int> copy_negative(const std::vector<int> &vector)
{
    std::vector<int> result;
    for (int index = 0; index < vector.size(); ++index)
    {
        if (vector[index] < 0)
        {
            result.push_back(vector[index]);
        }
    }
    return result;
}
int main()
{
    std::vector<int> result = copy_negative(std::vector<int>{3, -1, 12, -5, 7, -10});
    for (int index = 0; index < result.size(); ++index)
    {
        std::cout << result[index] << " ";
    }
    std::cout << std::endl;
}