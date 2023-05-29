#include <cmath>
#include <iostream>
double quadratic(double &x1, double &x2, double a, double b, double c)
{

    double delta = b * b - 4 * a * c;
    if (delta >= 0)
    {
        x1 = (-b - std::sqrt(delta)) / a / 2;
        x2 = (-b + std::sqrt(delta)) / a / 2;
    }
    return delta;
}
int main()
{
    double a, b, c;
    std::cin >> a >> b >> c;
    double x1, x2;
    double delta = quadratic(x1, x2, a, b, c);
    std::cout << delta << std::endl;
    if (delta >= 0)
    {
        std::cout << x1 << " " << x2 << std::endl;
    }
}