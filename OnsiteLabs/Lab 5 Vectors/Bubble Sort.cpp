#include <iostream>
#include <vector>
void bubble_sort(std::vector<int> &vector)
{
    bool unordered = vector.size() > 1;
    while (unordered)
    {
        unordered = false;
        for (int index = 0; index + 1 < vector.size(); ++index)
        {
            if (vector[index] > vector[index + 1])
            {
                std::swap(vector[index], vector[index + 1]);
                unordered = true;
            }
        }
    }
}
int main()
{
    std::vector<int> vector;
    for (int element; std::cin >> element;)
    {
        vector.push_back(element);
    }
    bubble_sort(vector);
    for (int index = 0; index < vector.size();)
    {
        std::cout << vector[index++] << " ";
    }
    std::cout << std::endl;
}
