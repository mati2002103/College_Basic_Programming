#include <iostream>
void clock(double &small, double &large, int hour, int minute)
{
    small = (hour % 12) * 30. + minute / 2.;
    large = minute * 6.;
}
int main()
{
    int hour, minute;
    std::cin >> hour >> minute;
    double small, large;
    clock(small, large, hour, minute);
    std::cout << small << " " << large << std::endl;
}