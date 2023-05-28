#include <iostream>
#include <vector>
void reverse(std::vector<int> &vector)
{
    for (int begin = 0, end = vector.size(); begin < end;)
    {
        int element = vector[--end];
        vector[end] = vector[begin];
        vector[begin++] = element;
    }
}
int main()
{
    std::vector<int> vector{7, 3, -1, 9, 2};
    reverse(vector);
    for (int index = 0; index < vector.size(); ++index)
    {
        std::cout << vector[index] << " ";
    }
    std::cout << std::endl;
}
