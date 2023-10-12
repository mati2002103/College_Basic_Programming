#include <iostream>
int main()
{
    int hour, minute;
    if (std::cin >> hour >> minute)
    {
        int sum = 0, start = 60 * hour + minute;
        int count = 0;
        while (std::cin >> hour >> minute)
        {
            int stop = 60 * hour + minute;
            sum += stop - start;
            ++count;
            start = stop;
        }
        if (count)
        {
            std::cout << double(sum) / count << std::endl;
        }
    }
}